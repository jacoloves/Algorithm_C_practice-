/**********************************/
/*    filename:cci.h 共通ヘッダ   */
/**********************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* define */
#define gencode1(op)        gencode3(op, 0, 0)
#define gencode2(op, dt)    gencode3(op, 0, dt)

#define FALSE    0
#define TRUE     0
#define LOCAL_F  0
#define INTSIZE  sizeof(int)
#define NO_FIX_BREAK_ADRS -101
#define NO_FIX_RET_ADRS   -102
#define IS_MAIN(p)  (strcmp((p)->name, "main")==0)

#define ID_SIZ  31
/* enum struct ect */
typedef enum { NON_T, VOID_T, INT_T } DtType;
enum { EXIT_F=1, INPUT_F, PRINTF1_F, PRINTF2_F };

typedef enum {
  NOP, INC, DEC, NEG, NOT, ADD, SUB, MUL, DIV, MOD, LESS, LSEQ,
  GRT, GTEQ, EQU, NTEQ, AND, OR, CALL, DEL, JMP, JPT, JPF, EQCMP,
  LOD, LDA, LDI, STO, ADBR, RET, ASS, ASSV, VAL, LIB, STOP
} OpCode;

#ifdef CCI_CODE_C
char *ssOpCode[] = {
  "NOP", "INC", "DEC", "NEG", "NOT", "ADD", "SUB", "MUL", "DIV", "MOD", "LESS", "LSEQ",
  "GRT", "GTEQ", "EQU", "NTEQ", "AND", "OR", "CALL", "DEL", "JMP", "JPT", "JPF", "EQCMP",
  "LOD", "LDA", "LDI", "STO", "ADBR", "RET", "ASS", "ASSV", "VAL", "LIB", "STOP"
};
#endif


typedef enum {
  Lparen='(', Rparen=')', Lbrace='{', Rbrace='}', Lbracket='[', Rbracket=']',
  Plus='+', Minus='-', Multi='*', Divi='/', Mod='%', Not='!',
  Colon=':', Semicolon=';', Assign='=', Sharp='#', Yen='\\', Comma=',',
  SngQ='\'', DblQ='"',
  Void=150, Int, If, Else, For, While, Do, Switch, Case,
  Default, Break, Continue, Return, Printf, Input, Exit, Incre, Decre,
  Equal, NotEq, Less, LessEq, Great, GreatEq, And, Or,
  END_KeyList,
  Ident, IntNum, String, NulKind, Letter, Digit, EofTkn, Others
} TknKind;

typedef struct {
  TknKind kind;
  char    text[ID_SIZ+1];
  int     intVal;
} Token;

typedef enum {
  noId, varId, fncId, protId, paraId
} SymKind

typedef struct {
  cahr     *name;
  SymKind  nmKind;
  DtType   dtTyp;
  int      aryLen;
  char     level;
  char     args;
  int      adrs;
} SymTbl;

typedef struct {
  unsigned char opcode;
  unsigned char flag;
  int           opdata;
} Inst;
