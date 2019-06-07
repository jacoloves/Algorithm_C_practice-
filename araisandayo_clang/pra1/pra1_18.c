#include <stdio.h>

void npira(int n);

int main () {
    int n;

    do {
        printf("何段の三角形ですか：");
        scanf("%d", &n);
    } while (n <= 0);

    npira(n);

    return 0;
}

void npira (int n) {

    int cnt = n;

    for (int i = 1; i <= n; i++) {

        // 空白
        for (int k = 1; k < i; k++) {
            printf(" ");
        }

        // 数字
        for (int j = 1; j <= ((cnt - 1) * 2 + 1); j++) {
            printf("%d", i % 10);
        }
        
        printf("\n");
        cnt--;
        
    }
}