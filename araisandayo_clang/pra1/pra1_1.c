#include <stdio.h>

int max4 (int a, int b, int c, int d);

int main(void) {
    printf("max4(%d, %d, %d, %d) = %d¥n", 3, 2, 1, 4, max4(3, 2, 1, 4));

    return 0;
}

int max4 (int a, int b, int c, int d) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    return max;
}