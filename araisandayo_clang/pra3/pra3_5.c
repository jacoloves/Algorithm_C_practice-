#include <stdio.h>
#include <stdlib.h>

int front_search(const int a[], int pc, int key);

int bin_search2(const int a[], int n, int key)
{
    int pl = 0;
    int pr = n - 1;
    int pc;

    do {
        pc = (pl + pr) / 2;

        if (a[pc] == key) {
            pc = front_search(a, pc, key);
            return pc;
        } else if (a[pc] < key)
            pl = pc + 1;
        else
            pr = pc - 1;
        
    } while (pl <= pr);

    return -1;
}

int main(void)
{
    int i, nx, ky, idx;
    int *x;

    puts("２分探索");
    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("昇順に入力してください。\n");
    printf("x[0]：");
    scanf("%d", &x[0]);

    for(i = 1; i < nx; i++) {
        do {
            printf("x[%d]:", i);
            scanf("%d", &x[i]);
        } while(x[i] < x[i - 1]);
    }

    printf("探す値：");
    scanf("%d", &ky);

    idx = bin_search2(x, nx, ky);

    if (idx == -1)
        puts("探索に失敗しました。");
    else 
        printf("%dはx[%d]にあります。\n", ky, idx);

    free(x);

    return 0;

}

int front_search(const int a[], int pc, int key)
{

    int ans = pc;

    for (int i = pc; i >= 1; i--)
    {
        if (a[i] == a[i - 1]) {
            ans = i - 1;
        } else {
            break;
        }
    }

    return ans;
}