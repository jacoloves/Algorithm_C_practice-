#include <stdio.h>
#include <ctype.h>

void main() {
  char *p;

  p = "t e s t ";

  for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
    if (isspace(p[i])) {
      printf("空白です\n");
    } else {
      printf("%c\n", p[i]);
    }
  } 
}
