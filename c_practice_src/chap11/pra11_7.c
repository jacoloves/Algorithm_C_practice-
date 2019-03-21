#include <stdio.h>

void del_digit(char *s);

int main(void)
{
    char *str;

    printf("文字列を入力して下さい：");
    scanf("%s", str);

    del_digit(str);
    printf("数字を取り除きました：%s\n", str);

    return 0;
}

void del_digit(char *s)
{

    char *str2;
    int i = 0;

    while(*(s+i)){
        if(*s < '0' || *s > '9'){
            *str2 = *s;
        }
        i++;
        *(str2+i);
    }

    while()

}
