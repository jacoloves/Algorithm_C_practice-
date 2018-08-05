#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int a, b;

    do {
        printf("2つ整数を入力して下さい（最初に入力した数値が次に入力した数値よりが必ず大きい数値を入力して下さい）\n");
        printf("整数1:");
        scanf("%d", &a);
        printf("整数2:");
        scanf("%d", &b);
    } while(a <= b);

    int num = gcd(a, b);

    printf("%dと%dの最大公約数は、%dである。\n", a, b, num);

    return 0;
}

int gcd(int x, int y)
{
    int num1, num2, num3, tmp;

    num1 = y;
    num2 = x % y;
    num3 = 0;

    do{
        if(num1 % num2 == 0)
        {
            num3 = num2;
        }
        tmp = num2;
        num2 = num1 % num2;
        num1 = tmp;
    }while(num3 == 0);

    return num3;
}

