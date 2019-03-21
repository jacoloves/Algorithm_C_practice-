#include <stdio.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("コピー元ファイル名："); scanf("%s", sname);
    printf("コピー先ファイル名："); scanf("%s", dname);

    if((sfp = fopen(sname, "r")) == NULL){
        printf("\nコピー元ファイルをオープン出来ません。\n");
    }else{
        if((dfp = fopen(dname, "w")) == NULL){
            printf("\aコピー先ファイルをオープン出来ません。\n");
        }else{
            while((ch = fgetc(sfp)) != EOF){
                fputc(ch, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;

}