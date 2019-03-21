#include <stdio.h>

int main(void)
{
    int a, sum;
    int cnt = 0;

    do{
        printf("a:");
        scanf("%d", &a);
    }while(a <= 0);

    while(a % 10 != 0){
        a = a / 10;
        cnt++;
    }

    printf("その桁は%d桁です。\n", cnt);
}