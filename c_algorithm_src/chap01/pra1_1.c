#include <stdio.h>

int max4(int a, int b, int c, int d)
{
    int max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;
}

int main(void)
{
    printf("max4(%d, %d, %d, %d) = %d\n", 4, 3, 2, 1, max4(4, 3, 2, 1));
    printf("max4(%d, %d, %d, %d) = %d\n", 4, 3, 1, 2, max4(4, 3, 1, 2));
    printf("max4(%d, %d, %d, %d) = %d\n", 4, 1, 3, 2, max4(4, 1, 3, 2));
    printf("max4(%d, %d, %d, %d) = %d\n", 3, 4, 1, 2, max4(3, 4, 1, 2));

    return 0;
}