#include <stdio.h>

int main(void)
{
    int i, j, n;

    do{
        printf("何段の三角形ですか：");
        scanf("%d", &n);
    }while(n <= 0);

    for(i = 1; i<= n; i++){
        for(j = 1; j <= i; j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}