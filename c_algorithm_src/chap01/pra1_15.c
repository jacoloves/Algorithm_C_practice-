#include <stdio.h>

//左下直角三角形
void triangleLB(int n);
//左上直角三角形
void triangleLU(int n);
//右上直角三角形
void triangleRU(int n);
//右下直角三角形
void triangleRB(int n);

int main(void)
{
    int i, j, n;

    do{
        printf("何段の三角形ですか：");
        scanf("%d", &n);
    }while(n <= 0);

    triangleRB(n);

    return 0;
}

void triangleLB(int n)
{
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= i; j++){
            putchar('*');
        }
        putchar('\n');
    }
}

void triangleLU(int n)
{
    int sum = n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            printf("*");
        }
        printf("\n");
        sum--;
    }
}

void triangleRU(int n)
{
    int sum1 = 0;
    int sum2 = n;

    for(int i = 1; i <= n; i++){
        //空白
        for(int j = 0; j < sum1; j++){
            printf(" ");
        }

        //＊
        for(int k = 1; k <= sum2; k++){
            printf("*");
        }

        printf("\n");
        sum1++;
        sum2--;
    }
}

void triangleRB(int n)
{
    int sum1 = n - 1;
    int sum2 = 1;

    for(int i = 1; i <= n; i++){
        //空白
        for(int j = 1; j <= sum1; j++){
            printf(" ");
        }
        //＊
        for(int k = 1; k <= sum2; k++){
            printf("*");
        }

        printf("\n");
        sum1--;
        sum2++;
    }
}