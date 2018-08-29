#include <stdio.h>

int main(void)
{
    FILE *fp;
    char moji[128];

    printf("ファイル名を入力して下さい：");
    scanf("%s", moji);

    fp = fopen(moji, "r");

    if(fp == NULL){
        printf("\aファイル\"%s\"をオープンできませんでした。\n", moji);
    }else{
        printf("\aファイル\"%s\"をオープンしました。\n", moji);
        fclose(fp);
    }

    return 0;
}