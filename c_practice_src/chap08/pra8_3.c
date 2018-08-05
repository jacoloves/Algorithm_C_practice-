#include <stdio.h>

//これ難問だ。全く思い浮かばない。
#define swap(type, a, b) {
    type c;
    c = (a);
    (a) = (b);
    (b  ) = c;
}

int main(void)
{
    int x = 5;
    int y = 10;

    swap(int, x, y);

    printf("x=%d\n", x);
    printf("y=%d\n", y);

    return 0;
}