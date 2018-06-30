#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n);

int main(void)
{
        int a, ky, cnt;

        printf("整数を入力してください。\n");
        printf("整数:"); scanf("%d", &a);

        int x[a];

        for(int i = 0; i < a; i++){
                printf("x[%d]:", i);
                scanf("%d", &x[i]);
        }

        printf("探す値：");
        scanf("%d", &ky);

        for(int i = 0; i < a; i++){
                if(x[i] == ky){
                        cnt++;
                }
        }

        int y[cnt];

        int sum = search_idx(x, y, ky, a);

        if(sum != 0){
                printf("格納してHitした要素数は%d個です。\n", sum);
        }else{
                printf("0個ないしはhitしませんでした。\n");
        }

        return 0;
}


int search_idx(const int v[], int idx[], int key, int n)
{
        int j = 0;
        int hit = 0;

        for(int i = 0; i < n; i++){
                if(v[i] == key){
                        idx[j] = i;
                        j++;
                }
        }

        for(int i = 0; i < j; i++){
                if(idx[i] == j){
                        hit = idx[i];
                }
        }

        return hit;
}