#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
    int i = 0;

    //上段
    printf("   |");
    for(int j = 0; j < n; j++){
        printf("   %d", j);
    }
    printf("\n");
    printf("---+");
    for(int j = 0; j < n; j++){
        printf("----");
    }
    printf("--");
    printf("\n");

    while(1){
        //中段*
        printf("   |");
        for(int j = 0; j <= i; j++){
            printf("   ");
            if(j == i){
                printf("*\n");
            }else{
                printf(" ");
            }
        }

        //中段数字
        printf("  %d|", i);
        for(int j = 0; j < n; j++){
            printf("   %d", a[j]);
        }
        printf("  \n");
        
        if(i == n){
            return -1;
        }
        if(a[i] == key){
            return i;
        }else{
            printf("   |\n");
        }
        i++;
    }
    
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

    printf("\n");

    if(idx == -1){
        puts("探索に失敗しました。");
    }else{
        printf("%dはx[%d]にあります。\n", ky, idx);
    }

    free(x);

    return 0;
}