#include <stdio.h>

int main(void)
{

    //上部
    printf("   |");
    for(int i = 1; i <= 9; i++){
        printf("%3d", i);
    }

    printf("\n");

    //上部その２
    printf("---+");
    for(int i = 1; i <= 9; i++){
        printf("---");
    }

    printf("\n");

    //中段その１
    for(int i = 1; i <= 9; i++){
        printf(" %d |", i);
        //中段その２
        for(int j = 1; j <= 9; j++){
            printf("%3d", i + j);
        }
        printf("\n");
    }

    return 0;
}