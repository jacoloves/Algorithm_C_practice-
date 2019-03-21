#include <stdio.h>

int main(void)
{
    FILE *fp;
    double pi = 3.14159265358979323846;

    printf("変数piから取り出した円周率は%23.21fです。\n", pi);

    if((fp = fopen("PI.bin", "wb")) == NULL){
        printf("\aファイルをオープン出来ません。\n");
    }else{
        fwrite(&pi, sizeof(double), 1, fp);
        fclose(fp);
    }

    if((fp = fopen("PI.bin", "rb")) == NULL){
        printf("\aファイルをオープン出来ません。\n");
    }else{
        fread(&pi, sizeof(double), 1, fp);
        printf("ファイルから読み取った円周率は%23.21fです。\n", pi);
        fclose(fp);
    }

    return 0;
}