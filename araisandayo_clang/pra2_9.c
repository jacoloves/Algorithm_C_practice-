#include <stdio.h>
#include <stdlib.h>

void ary_rcopy(int a[], const int b[], int n);

int main()
{
    int num;
    int *x, *y;

    printf("要素数は：");
    scanf("%d", &num);

    x = malloc(sizeof(int));
    y = malloc(sizeof(int));
    
    printf("%d個の整数を入力してください。\n", num);

    for (int i = 0; i < num; i++)
    {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    ary_rcopy(y, x, num);

    printf("yの配列の場合\n");
    for (int i = 0; i < num; i++)
    {
        printf("y[%d]:%d\n", i, y[i]);
    }

    free(x);
    free(y);


}

void ary_rcopy(int a[], const int b[], int n)
{
    int cnt = 0;
    int ary_n = n - 1;
    do {
        a[cnt++] = b[ary_n--];
    } while (ary_n >= 0);
}