#include <stdio.h>

void rev_string(char s[][128], int n);

int main(void)
{
    int n;

    printf("出力する配列数を入力してください：");
    scanf("%d", &n);

    char s[n][128];

    for(int i = 0; i < n; i++){
        printf("s[%d]:", i);
        scanf("%s", s[i]);
    }

    rev_string(s, n);

    return 0;
}

void rev_string(char s[][128], int n)
{
    char ans[n][128];

    for(int i = 0; i < n; i++){
        int len = 0;
        while(s[i][len]){
            len++;
        }

        int j = 0;
        for(len = len - 1; len >= 0; len--){    
            ans[i][j] = s[i][len];
            if(ans[i][j] == '\0'){
                break;
            }
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s\n", ans[i]);
    }

}