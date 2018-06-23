#include <stdio.h>

int main(void)
{
        //上段部分
        printf("   |");
        for(int i=1; i<=9; i++){
                printf("  %d", i);
        }
        printf("\n");
        //中段のこれ---+---
        printf("---+");
        for(int i=1; i<=9; i++){
                printf("---");
        }
        printf("\n");

        //下段の九九表
        for(int i = 1; i <= 9; i++){
                // n |の部分
                printf(" %d |", i);
                for(int j = 1; j <= 9; j++){
                        //九九の部分
                        printf("%3d", i*j);
                }
                printf("\n");
        }

        return 0;
}