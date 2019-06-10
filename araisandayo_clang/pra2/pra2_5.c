#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do { type t = x; x = y; y = t;} while(0)


void look_ary(int a[], int n);


void ary_reverse(int a[], int n) {
    int i;
    for (i = 0; i < n / 2; i++) {
        look_ary(a, n);
        printf("a[%d]とa[%d]を交換します。\n", i, (n - i - 1));
        swap(int, a[i], a[n - i -1]);
    }
}

int main(void) {
    int i;
    int *x;
    int nx;

    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("%d個の整数を入力してください。\n", nx);
    for (i = 0; i < nx; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    ary_reverse(x, nx);

    // 反転完了後呼び出す
    look_ary(x, nx);
    printf("反転が終了しました。\n");

    /*
    printf("配列の要素の並びを反転しました。\n");
    for (i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    */
    free(x);

    return 0;
}

void look_ary(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
}