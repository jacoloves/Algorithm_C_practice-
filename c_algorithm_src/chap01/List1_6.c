#include <stdio.h>

int main(void)
{
    int i, n;
    int sum;

    puts("1からnまでの和を求めます。");

    do{
        printf("nの値：");
        scanf("%d", &n);
    }while(n <= 0);

    sum = 0;

    for(i = 1; i <= n; i++){
        sum += i;
    }

    printf("1から%dまでの和は%dです。\n", n, sum);

    return 0;
}