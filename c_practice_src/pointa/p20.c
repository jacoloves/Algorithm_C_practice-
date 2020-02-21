#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char *name = (char*)malloc(strlen("Susan")+1);
  strcpy(name, "Susan");
  while(*name != 0) {
    printf("%c", *name);
    name++;
  }
  return 0;
}

