/*------------------------*/
/* 逆ポーランド記法の評価 */
/*------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void polish(char *s);
int execute(void);
int getvalue(int ch);
int order(int ch);
void push(int n);
int pop(void);

#define STK_STZ 20
int stack[STK_STZ+1];
int stkct;
char plsh_out[80];

int main(void)
{
  char siki[80];
  int ans;

  printf("入力："); fgets(siki, 80, stdin);
  polish(siki);
  if (plsh_out[0] == '\0') exit(1);
  ans = execute();
  printf("変換： %s\n", plsh_out);
  printf("結果： %d\n", ans);

  return 0;
}

void polish(char *s)
{
  int wk;
  char *out = plsh_out;

  stckt = 0;
  while(1) {
    while(isspace(*s)) { ++s; }
    if (*s == '\0') {
      while(stkct > 0) {
        if ((*out++ = pop()) == '(') {
          puts("'('が不正\n"); exit(1);
        }
      }
      break;
    }
    if (islower(*s) || isdigit(*s)) {
      *out++ = *s++; continue;
    }
    switch(*s) {
      case '(' :
        push(*s);
        break;
      case ')' :
        while((wk = pop()) != '(') {
          *out++ = wk;
          if (stkct == 0) { puts("'('が不正\n"); exit(1);}
        }
        break;
      default:
        if (order(*s) == -1) {
          printf("不正な文字(%c)\n", *s); exit(1);
        }
        while(stckt>0 && (order(stack[stkct]) >= order(*s))) {
          *out++ = pop();
        }
        push(*s);
    }
    s++;
  }
  *out = '\0';
}























