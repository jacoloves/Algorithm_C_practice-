#include <stdio.h>

int main(void)
{
    int array[5];
    int *p;
    int i;

    for (i = 0; i < 5; i++) {
        array[i] = i;
    }

    p = array;

    for (i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }

    return 0;
}