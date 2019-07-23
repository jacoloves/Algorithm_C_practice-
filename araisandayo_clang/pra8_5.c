#include <stdio.h>
#include <string.h>

char *str_rchr(const char *s, int c)
{

    const char *p = NULL;

    c = (char)c;
    while(1) {
        if (*s == c) {
            p = s;
        }
        if (*s == '\0') {
            break;
        }
        s++;
    }

    return (char *)p;
}


int main(void)
{
    char str[64];
    char tmp[64];

    int ch;
    char *idx;

    printf("文字列：");
    scanf("%s", str);

    printf("探す文字：");
    scanf("%s", tmp);
    ch = tmp[0];

    if ((idx = str_rchr(str, ch)) == -1) {
        printf("文字列%cは文字列中に存在しません。\n", ch);
    } else {
        printf("文字列%cは%ld文字目に存在します。\n", ch, (idx - str) + 1);
    }
    
    return 0;
}