#include <stdio.h>

void put_stringn(const char s[], int n);

int main(void)
{
    char str[128];
    int num;

    printf("文字列を入力して下さい：");
    scanf("%s", str);

    printf("くり返す回数を入力して下さい：");
    scanf("%d", &num);

    put_stringn(str, num);
    printf("\n");

    return 0;
}

void put_stringn(const char s[], int n)
{
    int num = 0;

    for(int i = 0; i < n; i++){
        while(s[num]){
            putchar(s[num++]);
        }
        num = 0;
    }
}