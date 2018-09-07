#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n)
{
    int i;
    int max = a[0];

    for(i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    return max; 
}

int main(void)
{
    int number;
    int i;
    int *height;

    srand(time(NULL));
    do{
        number = rand() % 100;
    }while(number < 5 || number > 20);
    printf("人数：%d\n", number);
    
    height = calloc(number, sizeof(int));

    for(i = 0; i < number; i++){
        height[i] = 100 + rand() % 90;
        printf("height[%d] = %d\n", i, height[i]);
    }

    printf("最大値は%dです。\n", maxof(height, number));

    free(height);

    return 0;
}