#include <stdio.h>

void nrpira(int n);

int main(void)
{
    int n;

    do{
        printf("何段のピラミッドですか：");
        scanf("%d", &n);
    }while(n <= 0);

    nrpira(n);

    return 0;
}

void nrpira(int n)
{
    int sum1 = 1;
    int sum2 = n;

    for(int i = 1; i<= n; i++){
        //空白
        for(int j = 1; j < sum1; j++){
            printf(" ");
        }

        //*
        for(int k = 1; k <= ((sum2 - 1) * 2 + 1); k++){
            printf("%d", i % 10);
        }

        printf("\n");
        sum1++;
        sum2--;
    }
}