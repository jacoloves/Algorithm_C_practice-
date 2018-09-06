#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t = x; x = y; y = t; }while (0)

void ary_reverse(int a[], int n)
{
    int i;

    for(i = 0; i < n / 2; i++){
        swap(int, a[i], a[n - i - 1]);
    }
}

int main(void)
{
    int i;
    int *x;
    int nx;

    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("%d個の整数を入力して下さい。\n", nx);
    for(i = 0; i < nx; i++){
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    ary_reverse(x, nx);

    printf("配列の要素の並びを反転しました。\n");
    for(i = 0; i < nx; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;
}