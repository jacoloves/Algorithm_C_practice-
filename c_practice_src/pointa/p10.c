#include <stdio.h>
#include <stdint.h>

int main()
{
  int num = 5;
  void *pv = &num;
  printf("%p\n", pv);
  pv = pv+1;
  return 0;
}

