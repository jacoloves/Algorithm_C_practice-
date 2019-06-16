#include <stdio.h>
#include <stdlib.h>

int gcd_array(const int a[], int n);

int main(void)
{
    int n;
    int *a;

    printf("要素数を入力してください：");
    scanf("%d", &n);

    a = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("最大公約数は%dです。\n", gcd_array(a, n));

    free(a);

    return 0;
}

int gcd_array(const int a[], int n)
{

}
