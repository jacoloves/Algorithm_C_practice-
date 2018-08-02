#include <stdio.h>

int main(void)
{
    int a;
    double b;
    long double c;

    printf("a:");
    scanf("%d", &a);

    printf("b:");
    scanf("%lf", &b);

    printf("c:");
    scanf("%Lf", &c);

    printf("-------結果-----------\n");
    printf("%d\n", a);
    printf("%lf\n", b);
    printf("%Lf\n", c);

    return 0;
}