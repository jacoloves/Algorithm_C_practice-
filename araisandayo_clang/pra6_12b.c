#include <stdio.h>
#include <stdlib.h>

void shell(int a[], int n)
{
    int i, j, h;

    for (h = 1; h < n / 9; h = h * 3 + 1) {
        ;
    }

    for ( ; h > 0l; h /= 3) {
        for (i = h; i < n; i++) {
            in tmp = a[i];
            for (j = i - h; j >= 0 && a[j] > tmp; j -= h) {
                a[j + h] = a[j];
            }
            a[j + h] = tmp;
        }
    }
}

int main(void) {
    int i, nx;
}