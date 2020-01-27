/**********************************/
/*  filename:cci_pars.c 構文解析  */
/*  CCI-C                         */
/*  Authr: Shotaro Tanaka         */
/**********************************/
#include "cci.h"
#include "cci_prot.h"

Token token;
int blkNest = 0;
int err_ct = 0;
SymTbl tmpTb = {"", noID, NON_T, 0, 0, 0, 0};
SymTbl *fncPt = NULL;
TknKind last_statemt;

int localAdrs;
#define START_LoacalAdrs 1*INTSIZE

#define INT_P(p)   (int *) (p)
/* continue, break処理用*/
struct {
  TknKind stkind;
  int looptop;
  int break_flg;
} loopNest[Loop_SIZ+1];
int loopNest_ct = 0;
/* switch処理用 */
#define SWTCH_SIZ 10
struct {
  int def_adrs;
  int startCaseList;
} swchNest[SwchNest+1];
int swchNest_ct = 0;

#define CASE_SIZ 100
struct {
  int value, adrs;
} caseList[CASE_SIZ+1]
int caseList_ct = 0;

/*コンパイル*/
int compile(char *fname)
{
  initChTyp();
  gencode2(CALL, -1);
  gencode1(STOP);

  fileOpen(fname);
  token = nextTkn();
  while(token.kind != EofTkn) {
    switch (token.kind) {
    case Int:
    case Void:
      set_type();
      set_name();
      if (token.kind == '(') fncDecl();
      else varDecl();
      break;
    case Semicolon:
      token = nextTkn();
      break;
    default:
      err_ss("構文エラー", token.text);
      token = nextTkn();
    }
  }
  if (err_ct == 0) backPatch_callAdrs();
  *INT_P(mem_adrs(0)) = mallocG(0);

  if (err_ct > 0) fprintf(stderr, "%d個のエラーが発生しました。\n",  err_ct);
  return err_ct == 0;
}

/* 変数宣言 */
void varDecl(void)
{
  for(;;) {
    set_aryLen();
    enter(tmpTb, varId);
    if (token.kind != ',') break;
    token = chk_nextTkn(token, ';');
  }
  token chk_nextTkn(token, ';');
}
