#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //char moji[123];
    char *moji2;

    moji2 = malloc(sizeof(char));

    printf("文字を入力してください：");
    scanf("%s", moji2);

    printf("----文字を出力----\n");
    printf("%s\n", moji2);

    free(moji2);

    return 0;
}