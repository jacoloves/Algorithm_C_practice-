#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char *string1;
  char *string2;
  string1 = (char*)malloc(16);
  strcpy(string1, "0123456789AB");
  string2 = realloc(string1, 64);
  printf("string1 Vvalue: %p [%s]\n", string1, string1);
  printf("string2 Vvalue: %p [%s]\n", string2, string2);
  return 0;
}

