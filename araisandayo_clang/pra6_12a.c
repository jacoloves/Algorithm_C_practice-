#include <stdio.h>
#include <stdlib.h>

void shell(int a[], int n)
{
    int i, j, h;
    int cnt = 0;
    for (h = n/2; h > 0; h /= 2) {
        for (i = h; i < n; i++) {
            int tmp = a[i];
            for (j = i - h; i >= 0 && a[j] > tmp; j -=h) {
                a[j + h] = a[j];
                cnt++;
            }
            a[j + h] = tmp;
            cnt++;
        }
    }

    printf("交換回数：%d\n", cnt);
}

int main(void)
{
    int i, nx;
    int *x;

    puts("シェルソート");
    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for (i = 0; i < nx; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    shell(x, nx);

    puts("昇順にソートしました。");
    for (i = 0; i < nx; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}