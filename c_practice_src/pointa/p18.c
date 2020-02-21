#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
  char *pc = (char*) malloc(6);
  for (int i = 0; i < 8; i++) {
    *pc[i] = 0;
  }

  return 0;
}

