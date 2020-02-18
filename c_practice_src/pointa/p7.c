#include <stdio.h>
#include <stdint.h>

int main() {
  int num;
  intptr_t *pi = (intptr_t*)&num;

  uintptr_t *pu = (uintptr_t*)&num;

  return 0;
}

