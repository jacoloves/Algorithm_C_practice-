#include <stdio.h>
#include <stdint.h>

int main()
{
  short s;
  short *ps = &s;
  char c;
  char *pc = &c;

  printf("Content of ps before: %d\n", ps);
  ps = ps + 1;
  printf("Content of ps after: %d\n", ps);


  printf("Content of pc before: %d\n", pc);
  pc = pc + 1;
  printf("Content of pc after: %d\n", pc);

  return 0;
}

