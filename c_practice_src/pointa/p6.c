#include <stdio.h>

int main() {
  size_t sizet = -5;
  printf("%d\n", sizet);
  printf("%zu\n", sizet);

  sizet = 5;

  printf("%d\n", sizet);
  printf("%zu\n", sizet);

  printf("Size of *char: %d\n", sizeof(char*));
  
  return 0;
}

