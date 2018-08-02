#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;

    printf("面積を入力してください。\n");
    scanf("%lf", &a);

    printf("面積は%fです。\n", pow(a, 2));

    return 0;

}