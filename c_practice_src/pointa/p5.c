#include <stdio.h>

int main() {
  int num;
  int *pi = &num;
  printf("Value of pi: %p\n", pi);
  void* pv = pi;
  pi = (int*) pv;
  printf("Value of pi: %p\n", pi);

  return 0;
}
