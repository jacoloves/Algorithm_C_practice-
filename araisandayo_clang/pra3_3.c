#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[]);

int main(void)
{
    int *x, *y, num, ky, key_num;

    printf("要素数を入力してください：");
    scanf("%d", &num);

    x = malloc(sizeof(int));
    y = malloc(sizeof(int));

    for (int i = 0; i < num; i++)
    {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    printf("探す値：");
    scanf("%d", &ky);

    key_num = search_idx(x, num, ky, y);

    printf("要素が格納されている配列番号は\n");

    for (int i = 0; i < key_num; i++)
    {
        printf("y[%d]:%d\n", i, y[i]);
    }

    free(x);
    free(y);

    return 0;
}

int search_idx(const int a[], int n, int key, int idx[])
{
    int cnt = 0;
    int key_arr = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            idx[key_arr++] = i;
            cnt++;
        }
    }

    return cnt;
}