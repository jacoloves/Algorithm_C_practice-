#include <stdio.h>

void spira(int n);

int main(void)
{
    int n;

    do{
        printf("何段のピラミッドですか：");
        scanf("%d", &n);
    }while(n <= 0);

    spira(n);

    return 0;
}

void spira(int n)
{
    int sum = n - 1;

    for(int i = 1; i <= n; i++){
        //空白
        for(int j = 1; j <= sum; j++){
            printf(" ");
        }

        //＊
        for(int k = 1; k <= ((i - 1) * 2 + 1); k++){
            printf("*");
        }
        printf("\n");
        sum--;
    }
}