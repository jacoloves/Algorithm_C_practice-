#include <stdio.h>

int combination(int n, int r);

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

    int com = combination(a, b);

    printf("%dC%dは、%dである。\n", a, b, com);

    return 0;
}

int combination(int n, int r)
{
    int ans1 = 1;
    int ans2 = 1;
    int ans3;

    //分子
    for(int i = 1; i <= n; i++){
        ans1 = ans1 * i;
    }

    //分母
    for(int i = 1; i<= r; i++){

        ans2 = ans2 * i;
    }

    ans3 = ans1 / ans2;

    return ans3; 
}