#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


void function2() {
  Object *var1 = ...;
  int var2;
  printf("Program Stack Example\n");
}

void function1() {
  Object *var3 = ...;
  function2();
}

int main() {
  int var4;
  function1();
  return 0;
}


