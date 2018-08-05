#include <stdio.h>

int main(void)
{
    int ch, sum;
    while((ch = getchar()) != EOF){
        putchar(ch);
        sum++;
    }
    
    printf("入力された行数は%dです。\n", sum);

    return 0;
}