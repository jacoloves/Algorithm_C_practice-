#include <stdio.h>

int main(void)
{
        int i, n;

        printf("正の整数を入力してください：");
        scanf("%d", &n);

        i = 1;

        while(i <= n){
                i = i * 2;
                if(i <= n){
                    printf("%d ", i);
                }
        }

        printf("\n");

        return 0;
}