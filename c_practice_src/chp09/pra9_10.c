#include <stdio.h>

#define NUMBER 10

int main(void)
{
    char s[NUMBER][128];
    int main_cnt = 0;

    printf("核種文字列を入力してください。\n");
    for(int i = 0; i < NUMBER; i++){
        int cnt = 0;
        printf("s[%d]:", i);
        scanf("%s", s[i]);
        
        for(int j = 0; j < 128; j++){
            if(s[i][j] == '$'){
                cnt++;
            }
        }

        if(cnt == 5){
            printf("処理を終了します。\n");
            break;
        }

        main_cnt++;
    }

    for(int i = 0; i < main_cnt; i++){
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}