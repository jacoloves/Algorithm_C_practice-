#include <stdio.h>

int main() {

    int i, n;

    printf("nの値：");
    scanf("%d", &n);
    
    i = 1;
    while(i <= n) {
        i++;
        printf("%d\n", i);
    }
}