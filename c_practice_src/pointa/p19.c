#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
  char *chunk;
  while(1) {
    chunk = (char*) malloc(1000000);
    printf("Allocationg\n");
  }
  return 0;
}

