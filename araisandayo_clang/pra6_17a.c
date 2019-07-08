#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

int med3(int a, int v, int c);

void quick(int a[], int left, int right)
{
    int pl = left; 
    int pr = right;
    int nx = right + 1; //元の要素数 
    int x = a[(pl+pr)/2];
    //中央値を求める
    int med = med3(pl, pr, x);
    //要素数から単純挿入ソートかクイックソートかを判別する。
    if (nx >= 9) {
        puts("クイックソートを実施します。");
        do {
            while (a[pl] < med) pl++;
            while(a[pr] > med) pr--;
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

int med3(int a, int b, int c) 
{
    if (a >= b) {
        if (b >= c) {
            return b;
        } else if (a <= c) {
            return a;
        } else {
            return c;
        }
    } else if (a > c) {
        return a;
    } else if ( b > c) {
        return c;
    } else {
        return b;
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