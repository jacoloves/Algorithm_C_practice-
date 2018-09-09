#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ary_shuffle(int a[], int n);

int main(void)
{
    int *x;
    int *y;
    int number;

    printf("要素数：");
    scanf("%d", &number);
    x = calloc(number, sizeof(int));

    printf("%d個の整数を入力して下さい。\n", number);
    for(int i = 0; i < number; i++){
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    ary_shuffle(x, number);

    printf("----入れ替えた結果は----\n");

    for(int i = 0; i < number; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }

    free(x);

    return 0;

}

void ary_shuffle(int a[], int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        int number;
        //乱数生成
        do{
            number = rand() % 100;
        }while(number >  n - 1);

        a[i] = a[number];

    }
}