#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
    int i = 0;

    for(i = 0; i < n; i++)
        if(a[i] == key)
            return i;
    
    return -i;
}

int main(void)
{
    int i, nx, ky, idx;
    int *x;

    puts("線形探索");
    printf(" 要素数： ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for(i = 0; i < nx; i++){
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    printf("探す値：");
    scanf("%d", &ky);

    idx = search(x, nx, ky);

    if(idx == -1){
        puts("探索に失敗しました。");
    }else{
        printf("%dはx[%d]にあります。\n", ky, idx);
    }

    free(x);

    return 0;
}