#include <stdio.h>
#include <stdlib.h>

void fsort(int a[], int n, int max)
{
    int i;
    int *f = calloc(max + 1, sizeof(int));
    int *b = calloc(n, sizeof(int));

    puts("fの配列（１回目）");
    for (i = 0; i <= max; i++) {
        f[i] = 0;
        printf("f[%d] = %d\n", i, f[i]);
    }

    puts("fの配列（２回目）");
    for (i = 0; i < n; i++) {
        f[a[i]]++;
        printf("f[%d] = %d\n", i, f[i]);
    }

    puts("fの配列（３回目）");
    for (i = 1; i <= max; i++) {
        f[i] += f[i-1];
        printf("f[%d] = %d\n", i, f[i]);
    }

    puts("bの配列（１回目）");
    for (i = n - 1; i >= 0; i--) {
        b[--f[a[i]]] = a[i];
        printf("b[%d] = %d\n", i, b[i]);
    }

    puts("aの配列（１回目）");
    for (i = 0; i < n; i++) {
        a[i] = b[i];
        printf("a[%d] = %d\n", i, a[i]);
    }

    free(b);
    free(f);
}

int main(void)
{
    int i, nx;
    int *x;
    const int max = 100;

    puts("度数ソート");
    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("0〜%dの整数を入力せよ。\n", max);
    for (i = 0; i < nx; i++) {
        do {
            printf("x[%d]:", i);
            scanf("%d", &x[i]);
        } while(x[i] < 0 || x[i] > max);
    }

    fsort(x, nx, max);

    puts("昇順にソートしました。");
    for(i = 0; i < nx; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}

