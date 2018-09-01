#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名：");
    scanf("%s", fname);

    if((fp = fopen(fname, "r")) == NULL)
        printf("\aファイルをオープン出来ません。\n");
    else{
        while((ch = fgetc(fp)) != EOF)
            putchar(ch);
        fclose(fp);
    }

    printf("\n");

    return 0;
}