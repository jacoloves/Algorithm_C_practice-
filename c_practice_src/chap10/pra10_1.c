#include <stdio.h>

void adjust_point(int *n);

int main(void)
{
    int num;

    printf("値を入力してください：");
    scanf("%d", &num);

    adjust_point(&num);

    printf("入力された値は%dです。\n", num);

    return 0;
}

void adjust_point(int *n)
{
        if(*n < 0){
            *n = 0;
        }else if(*n > 100){
            *n = 100;
        }
}