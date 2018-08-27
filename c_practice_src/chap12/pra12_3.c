#include <stdio.h>

struct xyz{
    int x;
    long y;
    double z;
};

struct xyz xyz_of(int x, long y, double z)
{
    struct xyz temp;

    temp.x = x;
    temp.y = y;
    temp.z = z;
    return temp;
}

int main(void)
{
    /* code */
    int a;
    long b;
    double c;

    struct xyz s = {0, 0, 0};

    printf("a:");
    scanf("%d", &a);

    printf("b:");
    scanf("%ld", &b);

    printf("c:");
    scanf("%lf", &c);

    s = xyz_of(a, b, c);

    printf("xyz.x = %d\n", s.x);
    printf("xyz.y = %ld\n", s.y);
    printf("xyz.z = %f\n", s.z);

    return 0;
}
