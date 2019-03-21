#include <stdio.h>

int main(void)
{
    FILE *fp;
    char moji[128];

    printf("ファイル名を入力して下さい：");
    scanf("%s", moji);

    fp = fopen(moji, "w");

    if(fp == NULL){
        printf("\aファイル\"%s\"を削除できませんでした。\n", moji);
    }else{
        printf("\aファイル\"%s\"を削除しました。\n", moji);
        fclose(fp);
    }

    return 0;
}