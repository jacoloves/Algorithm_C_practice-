#include <stdio.h>

int main() {
    int i, n;
    int sum = 0;

    puts("1からnまでの話を求めます。");

    printf("nの値：");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
        if (i != n)
            printf("%d + ", i);
    }
    printf("%d = %d\n", n, sum);
}