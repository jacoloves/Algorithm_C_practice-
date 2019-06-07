#include <stdio.h>

int main () {
    // 上段
    printf("   |");
    for (int i = 1; i <= 9; i++) {
        printf("%3d", i);
    }
    printf("\n");

    // 中段
    printf("---+");
    for (int i = 1; i <= 9; i++) {
        printf("---");
    }
    printf("\n");

    // 下段
    for (int i = 1; i <= 9; i++) {
        printf(" %d |", i);
        for (int j = 1; j <= 9; j++) {
            printf("%3d", i * j);
        }
        printf("\n");
    }
}