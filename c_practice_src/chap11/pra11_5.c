#include <stdio.h>

int str_chnum(const char *s, int c);

int main(void)
{
    char *moji = "test";
    char a[10] = "t";

    printf("検索文字は%d個です。\n", str_chnum(moji, a[0]));

    return 0;
}

int str_chnum(const char *s, int c)
{
    int len;
    int cnt;

    while(*s++){
        len++;
    }

    for(int i = 0; i < len; i++){
        if(*(s + i) == c){
            cnt++;
        }
    }

    return cnt;
}