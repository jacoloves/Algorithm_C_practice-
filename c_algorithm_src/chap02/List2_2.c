#include <stdio.h>

int main(void)
{
    int i;
    int a[] = {1, 2, 3, 4, 5, 6};
    int na = sizeof(a) / sizeof(a[0]);

    printf("配列aに要素数は%d です。\n", na);

    for(i = 0; i < na; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}