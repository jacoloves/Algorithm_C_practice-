#include <stdio.h>

int main(void)
{
    int i, n;
    int sum;

    puts("1からnまでの和を求めます。");

    printf("nの値：");
    scanf("%d", &n);

    sum = 0;

    for(i = 1; i <= n; i++){
        sum += i;
        printf("%d", i);
        if(i == n){
            printf(" ");
        }else{
            printf(" + ");
        }
    }

    printf("= %d\n", sum);

    return 0;
}