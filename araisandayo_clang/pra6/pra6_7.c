#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while(0)

void selection(int a[], int n) {
    int i, j;
    for (i = 0; i < n -1; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        for (int q = 0; q < n; q++) {
            if (a[q] == a[i]) {
                printf("   *");
            } else if (a[q] == a[min]) {
                printf("   +");
            } else {
                printf("    ");
            }
        }
        printf("\n");
        for (int k = 0; k < n; k++) {
            printf("%4d", a[k]);
        }
        printf("\n");

        swap(int, a[i], a[min]);
    }
}

int main() {
    int i, nx;
    int *x;

    puts("単純選択ソート");
    printf("要素数：");
    scanf("%d", &nx);

    x = (int *)malloc(sizeof(int)*nx);

    for (i = 0; i < nx; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    selection(x, nx);

    puts("昇順にソートしました。");
    for (i = 0; i < nx; i++) {
        printf("x[%d] = %d\n", i , x[i]);
    }

    free(x);

    return 0;
}