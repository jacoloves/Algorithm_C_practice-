#include <stdio.h>

int factorial(int n)
{
    int num = 1;

    for(int i = 1; i <= n; i++){
        num = num * i;
    }

    return num;
}

int main(void)
{
    int num;

    printf("整数を入力して下さい：");
    scanf("%d", &num);

    printf("%dの階乗は%dです。\n", num, factorial(num));

    return 0;
}