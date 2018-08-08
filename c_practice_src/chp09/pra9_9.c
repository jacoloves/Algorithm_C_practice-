#include <stdio.h>

void del_digit(char s[]);

int main(void)
{
    char str[128];

    printf("文字列を入力してください：");
    scanf("%s", str);

    del_digit(str);

    return 0;
}

void del_digit(char s[])
{
    int len = 0;
    int cnt = 0;
    int j = 0;
    char str2[128];

    while(s[len]){
        len++;
    }

    for(int i = 0; i < len ; i++){
        if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9'){
            
        }else{
            str2[j] = s[i];
            j++;
        }
    }

    str2[j+1] = '\n';

    printf("%s\n", str2);

}