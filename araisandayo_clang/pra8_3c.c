#include <stdio.h>

size_t str_len(const char *s)
{
    const char *p = s;
    while(*s++)
        s++;
    return s - p;
}

int main(void)
{
    char str[256];

    printf("文字列：");
    scanf("%s", str);

    printf("その文字列は%zu文字です。\n", str_len(str));
    return 0;
}