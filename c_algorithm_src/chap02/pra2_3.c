#include <stdio.h>
#include <stdlib.h>

double aveof(const int a[], int n);

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

    printf("平均値は%lfです。\n", aveof(height, number));

    free(height);

    return 0;
}

double aveof(const int a[], int n)
{
    int sum = 0;
    double ans;

    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    ans = sum / n;

    return ans;
}