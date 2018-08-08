#include <stdio.h>

void put_stringr(const char s[]);

int main(void)
{
    char str[128];

    printf("文字列を入力して下さい：");
    scanf("%s", str);

    put_stringr(str);
    printf("\n");

    return 0;
}

void put_stringr(const char s[])
{
    int len = 0;

    while(s[len]){
        len++;
    }

    //printf("%d", len);

    for(int i = len - 1; i >= 0; i--){
        printf("%c", s[i]);
    }
}