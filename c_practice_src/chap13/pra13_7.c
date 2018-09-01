#include <stdio.h>

int main(void)
{
    int ch;
    int cnt = 0;
    char num[] = {'0', '1', '2', '3', '4', '5', '6', '7','8', '9'};
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名：");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL)
        printf("\aファイルをオープン出来ません。\n");
    else{
        while((ch = fgetc(fp)) != EOF){
            for(int i = 0; i < 10; i++){
                if(ch == num[i]){
                    cnt++;
                }
            }
        }
        fclose(fp);
    }

    printf("各数字の個数は%dです。\n", cnt);

    return 0;
}