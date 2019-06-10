#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int a[], int n);

int main()
{
    int num;
    int *x;

    printf("要素数は：");
    scanf("%d", &num);

    x = malloc(sizeof(int));
    
    printf("%d個の整数を入力してください。\n", num);

    for (int i = 0; i < num; i++)
    {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    shuffle(x, num);

    printf("xの配列の場合\n");
    for (int i = 0; i < num; i++)
    {
        printf("x[%d]:%d\n", i, x[i]);
    }

    free(x);


}

void shuffle(int a[], int n)
{
    srand(time(NULL));
    int cnt = 0;
    int random;
    int used_flg = 0;
    int *b, *used_arr;

    b = malloc(sizeof(int));
    used_arr = malloc(sizeof(int));

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    do {
        // 参照した配列かを確認
        do {
            // ランダムに変数に値を格納
            random = rand() % n;
            for (int i = 0; i < cnt; i++) 
            {
                printf("てすと\n");
                if (random == used_arr[i])
                {
                    used_flg = 1;
                } else {
                    used_flg = 0;
                }
            }
        } while (used_flg != 0);

        // 使用済み配列番号を格納
        used_arr[cnt] = random;

        // a[]にb[random](無作為に選んだ数字)を挿入
        a[cnt] = b[random];

        // cntをプラス
        cnt++;
        
    } while (cnt <= n);


    free(b);
    free(used_arr);
}