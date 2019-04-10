#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char *p;

  p = (char*)malloc(100);

  p = "1as34df5g";

  for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
    if (isdigit(p[i])) {
      printf("10進数です。\n");
    } else {
      printf("%c\n", p[i]);
    }
  }

  return 0;
}
