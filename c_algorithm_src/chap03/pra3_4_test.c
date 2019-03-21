#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nx = 7;
    int *x;
    int pc = 4;
    int pl = 2;
    int pr = 6;
    int cnt = 0;
    int tmp;

    x = calloc(nx, sizeof(int));

    for(int i = 0; i < nx; i++){
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }


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

    for(int i = 0; i < nx; i++){
        printf("   %d", x[i]);
    }
    printf("\n");

    return 0;
    
}