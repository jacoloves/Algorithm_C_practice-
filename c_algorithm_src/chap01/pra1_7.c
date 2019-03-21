#include <stdio.h>

int main(void)
{
    int num, sum;

    printf("数字を入力してください：");
    scanf("%d", &num);

    //ガウスの方法の公式　n(n + 1)/2
    sum = (num * (num + 1)) / 2;

    printf("合計は%dです。\n", sum);

    return 0;
}