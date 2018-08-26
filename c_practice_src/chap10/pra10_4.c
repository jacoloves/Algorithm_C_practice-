#include <stdio.h>

void set_idx(int *v, int n);

int main(void)
{
    int num = 10;

    int a[num];

    for(int i = 0; i < num; i++){
        a[i] = 99;
    }

    printf("-----変更前-----\n");

    for(int i = 0; i < num; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    set_idx(a, num);

    printf("-----変更後-----\n");

    for(int i = 0; i < num; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

void set_idx(int *v, int n)
{
    for(int i = 0; i < n; i++){
        v[i] = i;
    }
}