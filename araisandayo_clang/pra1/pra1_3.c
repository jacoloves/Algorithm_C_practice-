#include <stdio.h>

int min4(int a, int b,  int c, int d);

int main() {
    printf("min4(%d, %d, %d, %d) = %d\n", 2, 1, 0, 4, min4(2, 1, 0, 4));
    return 0;
}


int min4(int a, int b, int c, int d) {
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (min > d) min = d;

    return min;
}