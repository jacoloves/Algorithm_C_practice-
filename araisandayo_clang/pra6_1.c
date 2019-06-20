#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

void bubble(int a[], int n)
{
    int i, j;
    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                swap(int, a[j], a[j + 1]);
            }
        }
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

    puts("昇順にソートしました。");

    for (i = 0; i < nx; i++) {
        printf("x[%d]: = %d\n", i, x[i]);
    }
}

