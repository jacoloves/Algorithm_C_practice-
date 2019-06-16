#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int x, y;
    puts("二つの整数の最大公約数を求めます。");
    printf("整数を入力せよ：");
    scanf("%d", &x);

    printf("整数を入力せよ：");
    scanf("%d", &y);

    printf("最大公約数は%dです。\n", gcd(x, y));
    return 0;
}

int gcd(int x, int y)
{
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
