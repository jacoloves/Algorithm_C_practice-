#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key)
{
    int pl = 0;
    int pr = n - 1;
    int pc;

    //上段
    printf("   |");
    for(int i = 0; i < n; i++){
        printf("   %d", i);
    }
    printf("\n");
    printf("---+");
    for(int i = 0; i < n; i++){
        printf("----");
    }
    printf("--\n");

    do{
        pc = (pl + pr) / 2;
        printf("   |");
        /*----矢印 MOD START----*/
        int cnt = 0;
        int tmp;
        //<-
        for(int i = 0; i <= pl; i++){
            if(i == pl){
                printf(" <- ");
            }else{
                printf("    ");
            }
            cnt++;
        }

        tmp = cnt;

        //+
        for(int i = tmp; i <= pc; i++){
            if(i == pc){
                printf("   +");
            }else{
                printf("    ");
            }
            cnt++;
        }

        tmp = cnt;

        //->
        for(int i = tmp; i <= pr; i++){
            if(i == pr){
                printf("  ->");
            }else{
                printf("    ");
            }
        }
        printf("\n");

        /*----矢印 MOD END----*/
        printf("  %d|", pc);
        for(int i = 0; i < n; i++){
            printf("   %d", a[i]);
        }
        printf("\n");
        
        if(a[pc] == key){
            return pc;
        }else if(a[pc] < key){
            pl = pc + 1;
            printf("   |\n");
        }else{
            pr = pc - 1;
            printf("   |\n");
        }
    }while(pl <= pr);

    return -1;
}

int main(void)
{
    int nx, ky, idx;
    int *x;

    puts("2分探索");
    printf("要素数：");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));

    printf("昇順に入力して下さい。\n");
    printf("x[0]:");
    scanf("%d", &x[0]);

    for(int i = 1; i < nx; i++){
        do{
            printf("x[%d]:", i);
            scanf("%d", &x[i]);
        }while(x[i] < x[i - 1]);
    }

    printf("探す値：");
    scanf("%d", &ky);

    idx = bin_search(x, nx, ky);
    printf("\n");

    if(idx == -1){
        puts("探索に失敗しました。");
    }else{
        printf("%dはx[%d]にあります。\n", ky, idx);
    }

    free(x);

    return 0;
}