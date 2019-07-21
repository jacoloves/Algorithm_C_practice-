#include <stdio.h>

char *str_chr(const char *s, int c)
{

    c = (char)c;
    while (*s != c) {
        if (*s == '\0') {
            return NULL;
        }
        s++;
    }

    return (char *)s;
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

    if ((idx == str_chr(str, ch)) == -1) {
        printf("文字列%cは文字列中に存在しません。\n", ch);
    } else {
        printf("文字列%cは%ld文字目に存在します。\n", ch, (idx - str) + 1);
    }
    
    return 0;
}