#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t = x; x = y; y = t; }while(0)

void ary_reverse(int a[], int n)
{
    int i;
    printf("----結果を出力します----\n");
    for(i = 0; i < n / 2; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
        printf("a[%d]とa[%d]を交換します。\n", i, (n - i - 1));
        swap(int, a[i], a[n - i - 1]);
    }

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
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

    printf("反転が終了しました。\n");
    /*for(i = 0; i < nx; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }*/

    free(x);

    return 0;

}