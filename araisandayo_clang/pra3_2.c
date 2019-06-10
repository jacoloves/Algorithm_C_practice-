#include <stdio.h>
#include <stdlib.h>

int serach(const int a[], int n, int key)
{

    // 枠組み
    printf("   |");
    for (int i = 0; i < n; i++) 
    {
        printf("%4d", i);
    }
    printf("\n");

    printf("---+");
    for (int i = 0; i < n; i++) 
    {
        printf("----");
    }
    printf("  \n");

    for (int i = 0; i < n; i++)
    {
        printf("   |");

        for (int j = 0; j < n; j++)
        {
            printf("   ");
            if (j == i) 
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  \n");

        printf("  %d|", i);

        for (int k = 0; k < n; k++)
        {
            printf("%4d", a[k]);
        }
        printf("  \n");

        if (a[i] == key)
        {
            return i;
        }

        printf("   |\n");
    }

    return -1;
}

int main(void)
{
    int i, nx, ky, idx;
    int *x;

    puts("線形探索");
    printf("要素数：");
    scanf("%d", &nx);

    x = malloc(sizeof(int));

    for (i = 0; i < nx; i++)
    {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }
    printf("探す値：");
    scanf("%d", &ky);

    idx = serach(x, nx, ky);

    if (idx == -1)
        puts("探索に失敗しました。");
    else
        printf("%dはx[%d]にあります。\n", ky, idx);

    free(x);

    return 0;
}