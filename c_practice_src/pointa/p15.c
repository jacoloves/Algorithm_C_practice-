#include <stdio.h>
#include <stdint.h>

int main()
{
  int num;
  int *const cpi = &num;

  *cpi = 25;

  printf("num : %d\n", num);
  printf("cpi : %d\n", *cpi);
  return 0;
}

