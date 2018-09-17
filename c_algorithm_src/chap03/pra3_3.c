#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[]);

int main(void)
{
    int nx, ky, n;
    int *x, *y;

    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    y = calloc(nx, sizeof(int));

    printf("配列に値を入力して下さい。\n");
    for(int i = 0; i < nx; i++){
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    printf("探す値：");
    scanf("%d", &ky);

    //関数呼び出し
    n = search_idx(x, nx, ky, y);

    printf("要素数は%dです。\n", n);
    for(int i = 0; i < n; i++){
        printf("y[%d]:%d\n", i, y[i]);
    }

    free(x);
    free(y);

    return 0;
}

int search_idx(const int a[], int n, int key, int idx[])
{
    int cnt = 0;
    int array_number = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == key){
            idx[cnt] = array_number;
            cnt++;
        }
        array_number++;
    }

    return cnt;
}