#include <stdio.h>

int main(void)
{
    int i;
    float x, sum;

    for(i = 0; i <= 100; i++){
        x = i / 100.0;
        sum += x;
    }

    printf("%f\n", sum);

    return 0;
}