#include <stdio.h>
#include <stddef.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{

  wchar_t str[] = L"日本語123";

  printf("sizeof(wchar_t)..%d\n", (int)sizeof(wchar_t));

  printf("str length..%d\n", (int)(sizeof(str) / sizeof(str[0])));

  for (int i = 0; i < (sizeof(str) / sizeof(str[0])); i++) {
    printf("str[%d]..%0x\n", i, str[i]);
  }

  return 0;
}

  
