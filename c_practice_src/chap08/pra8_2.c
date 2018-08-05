#include <stdio.h>

#define max(x, y) (((x) > (y) ? (x) : (y)))

int main(void)
{
    int a, b, c, d;

    a = 10;
    b = 9;
    c = 123;
    d = 345;

    printf("最大の値は%dです。\n", max(max(a, b), max(c, d)));
    printf("最大の値は%dです。\n", max(max(max(a, b), c), d));

    return 0;
}