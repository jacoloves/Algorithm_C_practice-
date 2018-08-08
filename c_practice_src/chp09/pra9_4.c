#include <stdio.h>

void null_string(char s[]);

int main(void)
{
    char str[128];
    char str2[128];

    printf("文字列を入力して下さい：");
    scanf("%s", str);

    printf("空文字にすると、\n");

    null_string(str);

    return 0;
}

void null_string(char s[])
{
    s[0] = '\0';

    printf("出力すると\"%s\"です。\n", s);
}