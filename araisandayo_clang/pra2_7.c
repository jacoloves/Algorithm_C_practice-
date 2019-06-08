#include <stdio.h>


int card_conv(unsigned x, int n, char d[]);

int main(void)
{
    int i;
    unsigned no;
    int cd;
    int dno;
    char cno[512];
    int retry;

    puts("10進数を奇数変換します。");

    do {
        printf("変換する非負の整数：");
        scanf("%u", &no);

        do {
            printf("何真数に変換しますか(2-36):");
            scanf("%d", &cd);
        } while (cd < 2 || cd > 36);

        dno = card_conv(no, cd, cno);

        printf("%d進数では", cd);
        for (i = 0; i < dno; i++)
            printf("%c", cno[i]);
        printf("です。\n");

        printf("もう一度しますか(1・・・はい/0・・・いいえ):");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}

int card_conv(unsigned x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;
    int digits2 = 0; 
    char cno2[512];

    // 一度cno2に値を格納する。
    if (x == 0)
    {
        
        cno2[digits++] = dchar[0];
    } else {
        while (x) {
            printf("%3d |%5u  …%2c\n", n, x, dchar[x % n]);
            printf("    +-------\n");
            cno2[digits++] = dchar[x % n];
            x /= n;
        }
        printf("%10u\n", x);
    }

    // cno2[]からd[]に逆に詰め直す
    do {
        if (digits >= 0)
            d[digits2++] = cno2[digits--];
    } while (digits >= 0);

    return digits2;
}