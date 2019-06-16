#include <stdio.h>

void move(int no, int x, int y)
{
    char str, str2;

    if (no > 1) {
        move(no - 1, x, 6 - x - y);
    }

    /* x軸 */
    if (x == 1) {
        str = 'A';
    } else if (x == 2) {
        str = 'B';
    } else {
        str = 'C';
    }

    /* y軸 */
    if (y == 1) {
        str2 = 'A';
    } else if (y == 2) {
        str2 = 'B';
    } else {
        str2 = 'C';
    }

    printf("円盤[%d]を%c軸から%c軸へ移動\n", no, str, str2);
    if (no > 1) {
        move(no - 1, 6 - x - y, y);
    }
}

int main(void)
{
    int n;
    printf("ハノイの塔\n円盤の枚数：");
    scanf("%d", &n);
    move(n, 1, 3);

    return 0;
}