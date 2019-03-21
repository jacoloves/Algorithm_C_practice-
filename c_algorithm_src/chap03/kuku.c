#include <stdio.h>

int sum(int x1, int x2)
{
    return x1 + x2;
}

int mul(int x1, int x2)
{
    return x1 * x2;
}

void kuku(int (*calc)(int, int))
{
    int i, j;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            printf("%3d", (*calc)(i, j));
        }
        putchar('\n');
    }
}

int main(void)
{
    puts("九九の加算表");
    kuku(sum);
    puts("九九の乗算表");
    kuku(mul);

    return 0;
}