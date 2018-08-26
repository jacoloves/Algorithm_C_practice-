#include <stdio.h>

void put_string(const char *s);

int main(void)
{
    char *moji = "test";

    //表示関数呼び出し
    put_string(moji);

    return 0;
}

void put_string(const char *s)
{
    printf("入力文字列は\"%c\"です。\n", *(s));
}