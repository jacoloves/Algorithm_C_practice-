#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

void quick(int a[], int left, int right)
{
    int pl = left; 
    int pr = right;
    int nx = right + 1; //元の要素数 
    int x = a[(pl+pr)/2];

    //要素数から単純挿入ソートかクイックソートかを判別する。
    if (nx >= 9) {
        puts("クイックソートを実施します。");
        do {
            while (a[pl] < x) pl++;
            while(a[pr] > x) pr--;
            if (pl <= pr) {
                swap(int, a[pl], a[pr]);
                pl++;
                pr--;
            }
        } while(pl <= pr);
        if (left < pr) quick(a, left, pr);
        if (pl < right) quick(a, pl, right);
    } else {
        puts("単純挿入ソートを実施します。");
        int i, j;
        for (i = 1; i < nx; i++) {
            int tmp = a[i];
            for(j = i; j > 0 && a[j - 1] > tmp; j--) {
                a[j] = a[j - 1];
            }
            a[j] = tmp;
        }
    }
}

int main(void) 
{
    int i, nx;
    int *x;

    printf("要素数:");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for (i = 0; i < nx; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    quick(x, 0, nx - 1);

    puts("昇順にソートしました。");
    for (i = 0; i < nx; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}