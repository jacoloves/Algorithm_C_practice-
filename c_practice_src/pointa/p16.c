#include <stdio.h>
#include <stdint.h>

int main()
{
  const int limit = 500;
  const int * const cpci = &limit;
  const int * const * pcpci = &cpci;

  printf("%d\n", *cpci);
  pcpci = &cpci;
  printf("%d\n", **pcpci);
  return 0;
}

