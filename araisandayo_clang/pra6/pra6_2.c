#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

void bubble(int a[], int n)
{
    int i, j;
    int hikaku_cnt = 0, chg_cnt = 0;
    int tmp = 1;
    for (i = 0; i < n -1; i++) {
        printf("パス");
        printf("%d", tmp+i);
        printf(":\n");
        for (j = n - 1; j > i; j--) {
            printf("  ");
            for (int k = 0; k < n; k++) {
                if (a[k] == a[j]) {
                    hikaku_cnt++;
                    if (a[k - 1] > a[k]) {
                        printf(" + %d", a[k]);
                    } else {
                        printf(" - %d", a[k]);
                    }
                } else {
                    printf("%4d", a[k]);
                }
            }
            printf("\n");
            if (a[j - 1] > a[j]) {
                chg_cnt++;
                swap(int, a[j - 1], a[j]);
            }
            
        }
        printf("  ");
        for (int k = 0; k < n; k++) {
            printf("%4d", a[k]);
        }
        printf("\n");
    }

    printf("比較は%d回でした。\n", hikaku_cnt);
    printf("交換は%d回でした。\n", chg_cnt);
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