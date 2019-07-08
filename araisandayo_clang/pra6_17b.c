#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

int med3(int a, int b, int c);

void quick(int a[], int left, int right) {
    if (right + 1 >= 9) {
        puts("クイックソートを実施します。");
        IntStack lstack;
        IntStack rstack;
        Initialize(&lstack, right-left+1);
        Initialize(&rstack, right-left+1);
        Push(&lstack, left);
        Push(&rstack, right);

        while(!IsEmpty(&lstack)) {
            int pl = (Pop(&lstack, &left), left);
            int pr = (Pop(&rstack, &right), right);
            int x = a[(left+right)/2];
            int med = med3(pl, pr, x);
            do {
                while(a[pl] < med) pl++;
                while(a[pr] > med) pr--;
                if(pl <= pr) {
                    swap(int, a[pl], a[pr]);
                    pl++;
                    pr--;
                }
            } while(pl <= pr);

            if (pr-left<right-pl) {
                swap(int, pl, left);
                swap(int, pr, right);
            }
            if (left < pr) {
                Push(&lstack, left);
                Push(&rstack, pr);
            }
            if (pl <right) {
                Push(&lstack, pl);
                Push(&rstack, right);
            }
        }
        Terminate(&lstack);
        Terminate(&rstack);
    } else {
        puts("単純挿入ソートを実施します。");
        int i, j;
        for (i = 1; i < right+1; i++) {
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