#include <stdio.h>

int main(void)
{
    int ch;
    int cnt = 0;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名：");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL)
        printf("\aファイルをオープン出来ません。\n");
    else{
        while((ch = fgetc(fp)) != EOF){
            if('\n' == ch){
                cnt++;
            }
        }
        fclose(fp);
    }

    printf("行数は%dです。\n", cnt);

    return 0;
}