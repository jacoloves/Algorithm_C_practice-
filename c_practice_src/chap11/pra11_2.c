/**
 *
 * 問題文の意味を理解できていない
 * かつ
 * ポインタと文字列の関係が理解できていないため
 * 一旦下記ソースは保留
 * 
**/

#include <stdio.h>

int main(void)
{
    int num;
    //出力文字制限
    int moji = 5;
    int cansel_flg;

    printf("いくつ数字を入力させますか？:");
    scanf("%d", &num);

    char *p[num];

    //代入
    for(int i = 0; i < num; i++){
        for(int j = 0; j < moji; j++){
            printf("p[%d][%d] = ");
            scanf("%s", p[i][j]);
            
            do{
                printf("入力を続けますか。はい・・・0、いいえ・・・1");
                scanf("%d", &cansel_flg);
            } while(cansel_flg == 0 || cansel_flg == 1);

            if(cansel_flg == 1){
                p[i][j+1] = '\0'; 
                break;
            }
        }
    }

    //出力
    for(int i = 0; i < num; i++){
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }

    return 0;
}