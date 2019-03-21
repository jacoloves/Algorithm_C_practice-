#include <stdio.h>

int main(void)
{
    int a, b;

    printf("aの値:");
    scanf("%d", &a);

    do{
        printf("bの値:");
        scanf("%d", &b);
        if(b <= a){
            printf("aより大きな値を入力せよ！\n");
        }
    }while(b <= a);

    printf("b - a は%dです。\n", b - a);

    return 0;
}