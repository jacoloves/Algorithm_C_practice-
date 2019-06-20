#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

void bubble(int a[], int n)
{
    int i, j;
    int tmp = 1;
    for (i = 0; i < n -1; i++) {
        printf("パス");
        printf("%d", tmp+i);
        printf(":\n");
        for (j = n - 1; j > i; j--) {
            printf("  ");
            for (int k = 0; k < n; k++) {
                printf("%4d", a[k]);
            }
            printf("\n");
            if (a[j - 1] > a[j]) {
                swap(int, a[j - 1], a[j]);
            }
            
        }
        printf("  ");
        for (int k = 0; k < n; k++) {
            printf("%4d", a[k]);
        }
        printf("\n");
    }
}

int main(void)
{
    int i, nx;
    int *x;

    puts("単純交換ソート");
    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for (i = 0; i < nx; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    bubble(x, nx);

    free(x);

    return 0;
}