#include <stdio.h>

int main(void)
{
    int no;

    printf("2桁の整数値を入力してください。\n");

    do{
        printf("値は：");
        scanf("%d", &no);
    }while(no < 10 || no > 99);

    printf("変数noの値は%dになりました。\n", no);

    return 0;
}