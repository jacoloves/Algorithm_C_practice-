#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int n;
    unsigned long count = 0;
    unsigned char buf[16];
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名：");
    scanf("%s", fname);

    if((fp = fopen(fname, "rb")) == NULL){
        printf("\aファイルをオープン出来ません。\n");
    }else{
        while((n = fread(buf, 1, 16, fp)) > 0){
            int i;

            printf("%08lX", count);
            
            for(i = 0; i < n; i++){
                printf("%02X ", (unsigned)buf[i]);
            }

            if(n < 16){
                for(i = n; i < 16; i++){
                    printf("    ");
                }
            }

            for(i = 0; i < n; i++){
                putchar(isprint(buf[i]) ? buf[i] : '.');
            }

            putchar('\n');

            count += 16;
        }
        fclose(fp);
    }
    return 0;
}