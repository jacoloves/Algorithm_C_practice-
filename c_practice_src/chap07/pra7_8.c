#include <stdio.h>

int main(void)
{
    float x, y;
    int i;

    for(x = 0.0; x <= 1.0; x += 0.01){
        printf("x = %f ", x);
        i = x * 100;
        y = i / 100.0;
        printf("x = %lf\n", y);
    }

    return 0;

}