#include <stdio.h>

int main() {
    int num;

    printf("正方形を表示します。\n");
    printf("段数は:");

    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++ ) {
            printf("*");
        }
        printf("\n");
    }
}