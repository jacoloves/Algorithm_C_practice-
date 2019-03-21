#include <stdio.h>
#include <stdlib.h>

long int_cmp(const long * a, const long *b)
{
    if(*a < *b){
        return -1;
    }else if(*a > *b){
        return 1;
    }else{
        return 0;
    }
}

int main(void)
{
    int i, nx, ky;
    long *x;
    long *p;

    puts("bsearch関数による探索");
    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(long));

    printf("昇順に入力して下さい。\n");
    printf("x[0]:");
    scanf("%ld", &x[0]);

    for(i = 1; i < nx; i++){
        do{
            printf("x[%d]:", i);
            scanf("%ld", &x[i]);
        }while(x[i] < x[i - 1]);
    }

    printf("探す値：");
    scanf("%d", &ky);

    p = bsearch(&ky, x, nx, sizeof(long), (int (*)(const void *, const void *))int_cmp);

    if(p == NULL){
        puts("探索に失敗しました。");
    }else{
        printf("%dはx[%ld]にあります。\n", ky, (long)(p - x));
    }

    free(x);

    return 0;
}