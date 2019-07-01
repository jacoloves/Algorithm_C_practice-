#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n);

int main(void)
{
    int i, nx;
    int *x;

    puts("単純挿入ソート");
    printf("要素数：");
    scanf("%d", &nx);
    x = (int *)malloc(sizeof(int)*(nx+1));

    for (i = 1; i < nx+1; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    insertion(x, nx+1);

    puts("昇順にソートしました。");
    for(i = 1; i < nx + 1; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}

void insertion(int a[], int n)
{
    int i, j;

    for (i = 1; i < n; i++) {
        int tmp = a[i];
        a[0] = tmp;
        for (j = i; a[j - 1] > tmp; j--) {
            a[j] = a[j - 1];
        }
        if (j) {
            a[j] = tmp;
        }
    }
}