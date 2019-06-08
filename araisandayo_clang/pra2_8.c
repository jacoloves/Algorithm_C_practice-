#include <stdio.h>
#include <stdlib.h>

void ary_copy(int a[], const int b[], int n);

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

    ary_copy(y, x, num);

    printf("yの配列の場合\n");
    for (int i = 0; i < num; i++)
    {
        printf("y[%d]:%d\n", i, y[i]);
    }


}

void ary_copy(int a[], const int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}