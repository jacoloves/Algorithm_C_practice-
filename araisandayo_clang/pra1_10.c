#include <stdio.h>

int main() {
    int a, b;

    printf("aの値:");
    scanf("%d", &a);

    do {
        printf("bの値：");
        scanf("%d", &b);
        if (a >= b) {
            printf("aより大きな値を入力せよ！\n");
        }
    } while(a >= b);

    printf("b - aは%dです。\n", b - a);
    return 0;
}