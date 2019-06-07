#include <stdio.h>

/**
 * ガウスの方法
 * n(n+1)/2で求められる
 **/
int main() {
    int n;
    int sum = 0;
    printf("nの値：");
    scanf("%d", &n);

    // ガウスの方法
    sum = n*(n+1)/2;

    printf("合計は%dです。\n", sum);
}