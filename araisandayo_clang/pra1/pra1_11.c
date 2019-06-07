#include <stdio.h>

int main() {
    int num;
    int cnt = 0;
    printf("numの値：");
    scanf("%d", &num);

    while(num > 0) {
        num = num / 10;
        cnt++; 
    }

    printf("その数は%d桁です。\n", cnt);
}