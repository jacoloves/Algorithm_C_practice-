#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bin_insertion(int a[], int n)
{
    int i, j;
    int k;
    for (i = 1; i < n; i++) {
        int key = a[i];
        int pl = 0;
        int pr = i - 1;
        int pc;
        int pd;

        do {
            pc = (pl + pr) / 2;
            if (a[pc] == key) {
                break;
            } else if (a[pc] < key) {
                pl = pc + 1;
            } else {
                pr = pc - 1;
            }
        } while (pl <= pr);
        pd = (pl <= pr) ? pc + 1 : pr + 1;

        memmove(&a[pd + 1], &a[pd], (i - pd) * sizeof(int));
        a[pd] = key;
    }
}

int main(void) {
    int i, nx;
    int *x;

    puts("2分挿入ソート");
    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for (i = 0; i < ns; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    bin_insertion(x, nx);

    puts("昇順にソートしました。");
    for (i = 0; i < nx; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}