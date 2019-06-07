#include <stdio.h>

void spira(int n);

int main () {
    int n;

    do {
        printf("何段の三角形ですか：");
        scanf("%d", &n);
    } while (n <= 0);

    spira(n);

    return 0;
}

void spira(int n) {

    int cnt = n;

    for (int i = 1; i <= n; i++) {
        // 空白
        for (int j = cnt - 1; j >= 1; j--) {
            printf(" ");
        }
        
        // 星
        for (int k = 1; k <= ((i - 1) * 2 + 1); k++) {
            printf("*");
        }
        printf("\n");
        cnt--;
    }
}