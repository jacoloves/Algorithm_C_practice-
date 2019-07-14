#include <stdio.h>
#include <stdlib.h>

int is_sorted(const int a[], int n);

int main()
{
    int nx, chg;
    int *x;

    puts("値を格納してね");
    printf("要素数：");
    scanf("%d", &nx);
    x = (int *)malloc(sizeof(int) * nx);

    for (int i = 0; i < nx; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    chg = is_sorted(x, nx);

    if (chg == 1) {
        puts("ソート済みです。");
    } else {
        puts("ソートされていません。");
    }
}

int is_sorted(const int a[], int n)
{
    int exchg = 0;
    for (int i = 0; i < n - 1; i++) {
        if (i != n - 1) {
            if (a[i] > a[i + 1]) {
                exchg++;
            }
        } 
        
        if (exchg != 0) {
            return 0;
        }
    }

    if (exchg == 0) {
        return 1;
    }
}