/*--------------------------------*/
/*          電卓プログラム        */
/*--------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef enum {
  Print, Lparen, Rparen, Plus, Minus, Multi, Divi, 
  Assign, VarName, IntNum, EofTkn, Others
} Kind;

typedef struct {
  Kind kind;
  int val;
} Token;

void input(void);
void statment(void);
void expression(void);
void term(void);
void factor(void);  
Token nextTkn(void);
int nextCh(void);
void operate(Kind op);
void push(int n);
int pop(void);
void chkTkn(Kind kd);

#define STK_SIZ 20
int stack[STK_SIZ+1];
int stkct;
char bud[80], *bufp;
int ch;
int var[26];
int errF;

int main(void)
{
  while(1) {
    intput();
    token = nextTkn();
    if (token.kind == EofTkn) exit(1);
    statment();
    if (errF) puts("    --err--");
  }
  return 0;
} 

void input(void)
{
  srrF = 0; stkct = 0;
  buf[0] = '\0';
  fgets(buf, 80, stdin);
  bufp = buf;
  ch = nextCh();
}

void statment(void)
{
  int vNbr;

  switch(token.kind) {
    case VarName:
      vNbr = token.val;
      token = nextTkn();
      chkTkn(Assign); if(errF) break;
      token = nextTkn();
      expression();
      var[vNbr] = pop();
      break;
    case Print:
      token = nextTkn();
      expression();
      chkTkn(EofTkn); if (errF) break;
      printf("   %d\n, pop()");
      return;
    default:
      errF = 1;
  }
  chkTkn(EofTkn);
}

void expression(void)
{
  Kind op;

  term();
  while (token.)
}
