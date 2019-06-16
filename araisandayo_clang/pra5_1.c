#include <stdio.h>

int factorial(int n);

int main(void)
{
    int x;

    printf("整数を入力せよ：");
    scanf("%d", &x);

    printf("%dの階乗は%dです。\n", x, factorial(x));
    return 0;
}

int factorial(int n)
{
    int num = 1;

    for (int i = n; i >= 1; i--) {
        num *= i;
    }

    return num;
}
