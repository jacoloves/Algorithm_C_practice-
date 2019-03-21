#include <stdio.h>

int main(void)
{
    int height, wide;

    printf("長方形を表示します。\n");
    printf("高さは：");
    scanf("%d", &height);

    printf("横幅は:");
    scanf("%d", &wide);

    for(int i = 1; i<= height; i++){
        for(int j = 1; j <= wide; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}