#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int *pi = (int*)malloc(sizeof(int));
  *pi = 5;
  printf("*pi:%d\n", *pi);
  free(pi);
  return 0;
}

