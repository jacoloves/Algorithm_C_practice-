#include <stdio.h>

int sumof(int a, int b);

int main(void)
{
    int a, b, sum;

    printf("a:");
    scanf("%d", &a);

    printf("b:");
    scanf("%d", &b);

    //関数に渡す
    sum = sumof(a, b);

    printf("%dと%dの大小関係なしの和は%dです\n", a, b, sum);

    return 0;

}

int sumof(int a, int b)
{
    int x, y;
    int ans = 0;

    if(a >= b){
        x = b;
        y = a;
    }else if(a < b){
        x = a;
        y = b;
    }

    for(int i = x; i <= y; i++){
        ans += i;
    }

    return ans;
}