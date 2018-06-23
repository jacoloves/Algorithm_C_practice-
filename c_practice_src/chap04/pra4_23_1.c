#include <stdio.h>

int main(void)
{
        int num, cnt;

        printf("左上直角三角形を作ります。\n");
        printf("短辺:");
        scanf("%d", &num);

        cnt = num;

        for(int i = 1; i <= num; i++){
                for(int j = 1; j <= cnt; j++){
                        printf("*");
                }
                printf("\n");
                cnt--;
        }

        return 0;
}