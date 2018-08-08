#include <stdio.h>

int str_char(const char s[], int c);

int main(void)
{
    char str[128];
    int a;

    printf("文字列を入力して下さい：");
    scanf("%s", str);

    printf("検索する文字列を入力してください：");
    scanf("%d", &a);

    int ans = str_char(str, a);

    printf("検索文字列は%dです。\n", ans);

    return 0;
}

int str_char(const char s[], int c)
{
    int len = 0;
    //char smp = c;
    int d = -1;

    while(s[len]){
        len++;
    }

    for(int i = 0; i < len; i++){

        if(s[i] == c){
            //文字列が検索出来た場合
            //d = s[i];
        }

        printf("%d\n", s[i]);
    }

    printf("---------\n");
    printf("%d\n", c);

    return d;

}