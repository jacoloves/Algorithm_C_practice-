#include <stdio.h>
#include <stdlib.h>

int bin_search2(const int a[], int n, int key);

int main(void)
{
    int i, nx, ky, idx;
    int *x;

    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    for(i = 0; i < nx; i++){
        do{
            printf("x[%d]:", i);
            scanf("%d", &x[i]);
        }while(x[i] < x[i - 1]);
    }

    printf("探す値：");
    scanf("%d", &ky);

    idx = bin_search2(x, nx, ky);

    if(idx == -1){
        puts("探索に失敗しました。");
    }else{
        printf("%dはx[%d]にあります。\n", ky, idx);
    }

    free(x);

    return 0;
}

int bin_search2(const int a[], int n, int key)
{
    int pl = 0;
    int pr = n - 1;
    int pc;


    do{
        pc = (pl + pr) / 2;
        if(a[pc] == key){
            //keyと一致した場合先頭側へ1つずつ走査
            int i;
            for(i = pc - 1; i >= 0; i--){
                if(a[i] == key){
                    pc = i;
                }
            }
            return pc;
        }else if(a[pc] < key){
            pl = pc + 1;
        }else{
            pr = pc - 1;
        }
    }while(pl <= pr);

    return -1;
}

