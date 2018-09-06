#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int *a;
    int na;

    printf("要素数：");
    scanf("%d", &na);

    a = calloc(na, sizeof(int));

    if(a == NULL){
        puts("記憶域の確保に失敗しました。");
    }else{
        printf("%d個の整数を入力してください。\n", na);
        for(i = 0; i < na; i++){
            printf("a[%d]:", i);
            scanf("%d", &a[i]);
        }

        printf("各要素の値は以下の通りです。\n");
        for(i = 0; i < na; i++){
            printf("a[%d] = %d\n", i, a[i]);
        }
        free(a);
    }

    return 0;
}