#include <stdio.h>

#define diff(x, y) ((x) - (y))

int main(void)
{
    int a, b;

    printf("整数を入力してください\n");
    printf("整1：");
    scanf("%d", &a);

    printf("整数2：");
    scanf("%d", &b);

    printf("ふたつの差分は%dです。\n", diff(a, b));

    return 0;
}