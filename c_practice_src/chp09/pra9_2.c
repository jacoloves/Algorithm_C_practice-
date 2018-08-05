#include <stdio.h>

int main(void)
{
    char str[] = "ABC";
    str[0] = '\0';

    printf("文字列strは\"%s\"です。\n", str);

    return 0;
}