#include <stdio.h>

size_t str_len(const char *s)
{
    int len = 0;

    while(s[len])
        len++;
    return len;
}

int main(void)
{
    char str[256];

    printf("文字列：");
    scanf("%s", str);

    printf("その文字列は%zu文字です。\n", str_len(str));
    return 0;
}