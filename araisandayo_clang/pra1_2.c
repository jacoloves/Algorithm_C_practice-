#include <stdio.h>

int min3(int a, int b, int c);

int main() {
    printf("min3(%d, %d, %d) = %d\n", 3, 1, 2, min3(3, 1, 2));
    return 0;
}

int min3(int a, int b, int c) {
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;

    return min;
}