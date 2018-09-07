#include <stdio.h>
#include <stdlib.h>

int sumof(const int a[], int n);

int main(void)
{
    int i;
    int *height;
    int number;

    printf("人数：");
    scanf("%d", &number);

    height = calloc(number, sizeof(int));

    printf("%d人の身長を入力して下さい。\n", number);
    for(i = 0; i < number; i++){
        printf("height[%d]:", i);
        scanf("%d", &height[i]);
    }

    printf("合計値は%d です。\n", sumof(height, number));

    free(height);

    return 0;
}

int sumof(const int a[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    return sum;
}