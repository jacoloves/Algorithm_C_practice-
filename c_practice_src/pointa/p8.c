#include <stdio.h>
#include <stdint.h>

int main() {
  int vector[] = {28, 41, 7};
  int *pi = vector;

  printf("%d\n", *pi);
  pi += 1;
  printf("%d\n", *pi);
  pi += 1;
  printf("%d\n", *pi);

  pi = vector;
  pi += 3;

  printf("%p\n", pi);
  return 0;
}

