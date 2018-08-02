#include <stdio.h>

int main(void)
{
    float a = 1.0;
    double b = 2.0;
    long double c = 3.0;

    printf("sizeof(a)   = %u\n", (unsigned)sizeof(a));
    printf("sizeof(b)   = %u\n", (unsigned)sizeof(b));
    printf("sizeof(c)   = %u\n", (unsigned)sizeof(c));

    return 0;
}