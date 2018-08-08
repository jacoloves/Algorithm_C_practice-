#include <stdio.h>

void rev_string(char s[]);

int main(void)
{
    char str[128];

    printf("文字列を入力してください：");
    scanf("%s", str);

    rev_string(str);

    return 0;
}

void rev_string(char s[])
{
    int len = 0;
    int j = 0;
    char str2[128];

    while(s[len]){
        len++;
    }

    for(int i = len - 1; i >= 0; i--){
        str2[j] = s[i];
        j++;
    }

    str2[j + 1] = '\0';

    printf("%s\n", str2);

}