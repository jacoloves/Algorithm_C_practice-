#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n)
{
    int i;
    int min = a[0];

    for(i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    return min;
}

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

    printf("最小値は%d です。\n", minof(height, number));

    free(height);

    return 0;
}