#include <stdio.h>

int sumof(int a, int b);

int main() {
    int a, b;
    int sum = 0;

    printf("aの値：");
    scanf("%d", &a);

    printf("bの値：");
    scanf("%d", &b);

    sum = sumof(a, b);

    printf("合計は%dです。\n", sum);

    return 0;
}

int sumof(int a, int b) {
    int max, min;
    int sum = 0;
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    for (int i = min; i <= max; i++) {
        sum += i;
    }

    return sum;
}