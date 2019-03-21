#include <ctype.h>
#include <stdio.h>

void str_toupper(char *s)
{
    while(*s++){
        *s = toupper(*s);
    }
}

void str_tolower(char *s)
{
    while(*s++){
        *s = tolower(*s);
    }
}

int main(void)
{
    char *str;

    printf("文字列を入力して下さい：");
    scanf("%s", str);

    str_toupper(str);
    printf("大文字：%s\n", str);

    str_tolower(str);
    printf("大文字：%s\n", str);

    return 0;
}