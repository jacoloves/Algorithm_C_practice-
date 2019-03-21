#include <stdio.h>
#include <stdlib.h>

void ary_copy(int a[], const int b[], int n);

int main(void)
{
    int *x;
    int *y;
    int number;

    printf("要素数：");
    scanf("%d", &number);
    x = calloc(number, sizeof(int));
    y = calloc(number, sizeof(int));

    printf("%d個の整数を入力して下さい。\n", number);
    for(int i = 0; i < number; i++){
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    ary_copy(y, x, number);

    printf("----入れ替えた結果は----\n");

    for(int i = 0; i < number; i++){
        printf("y[%d] = %d\n", i, y[i]);
    }

    free(x);
    free(y);

    return 0;

}

void ary_copy(int a[], const int b[], int n)
{
    for(int i = 0; i < n; i++){
        a[i] = b[i];
    }
}