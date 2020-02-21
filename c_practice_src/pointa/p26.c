#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int p1 = (int*)malloc(sizeof(int));
  *p1 = 5;

  int *p2;
  p2 = p1;

  printf("*p1:%d\n", *p1);
  printf("*p2:%d\n", *p2);

  free(p1);

  *p2 = 10;
  printf("*p1:%d\n", *p1);
  printf("*p2:%d\n", *p2);
  return 0;
}

