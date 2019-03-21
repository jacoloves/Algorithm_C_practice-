#include <stdio.h>

int main(void)
{
    FILE *fp;
    double pi = 3.14159265358979323846;

    printf("変数piから取り出した円周率は%23.21fです。\n", pi);

    if((fp = fopen("PI.txt", "w")) == NULL){
        printf("\aファイルをオープン出来ません。\n");
    }else{
        fprintf(fp, "%f", pi);
        fclose(fp);
    }

    if((fp = fopen("PI.txt", "r")) == NULL){
        printf("\aファイルをオープン出来ません。\n");
    }else{
        fscanf(fp, "%lf", &pi);
        printf("ファイルから読み取った円周率は%23.21fです。\n", pi);
        fclose(fp);
    }

    return 0;
}