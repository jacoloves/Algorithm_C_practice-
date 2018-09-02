#include <stdio.h>

int main(void)
{
    FILE *fp;
    double double_smp[] = {3.4, 4.567, 23.45, 0.04, 0.00003, 2.34567, 9.00002345, 34.2342, 0.1, 0.03445};

    if((fp = fopen("TEST.bin", "wb")) == NULL){
        printf("\aファイルをオープン出来ません。\n");
    }else{
        for(int i = 0; i < 10; i++){
            fwrite(double_smp, sizeof(double), i, fp);
        }
        fclose(fp);
    }

    if((fp = fopen("PI.bin", "rb")) == NULL){
        printf("\aファイルをオープン出来ません。\n");
    }else{
        printf("ファイルから値を出力します。\n");
        for(int i = 0; i < 10; i++){
            fread(double_smp, sizeof(double), i, fp);
            printf("%f\n", double_smp[i]);
        }
        fclose(fp);
    }

    return 0;
}