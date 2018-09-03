#include <stdio.h>

int min4(int a, int b, int c, int d)
{
    int min = a;

    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;

    return min;
}

int main(void)
{
    printf("min4(%d, %d, %d, %d) = %d\n", 4, 3, 2, 1, min4(4, 3, 2, 1));
    printf("min4(%d, %d, %d, %d) = %d\n", 3, 4, 2, 1, min4(3, 4, 2, 1));
    printf("min4(%d, %d, %d, %d) = %d\n", 3, 2, 4, 1, min4(3, 2, 4, 1));
    printf("min4(%d, %d, %d, %d) = %d\n", 1, 2, 3, 4, min4(1, 2, 3, 4));

    return 0;
}