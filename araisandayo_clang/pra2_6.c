#include <stdio.h>


void card_conv(unsigned x, int n, char d[]);

int card_convr(unsigned x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;

    if (x == 0)
    {
        d[digits++] = dchar[0];
    } else {
        while (x) {
            d[digits++] = dchar[x % n];
            x /= n;
        }
    }
    printf("\n");
    return digits;
}

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

        card_conv(no, cd, cno);
        dno = card_convr(no, cd, cno);

        printf("%d進数では", cd);
        for (i = dno - 1; i >= 0; i--)
            printf("%c", cno[i]);
        printf("です。\n");

        printf("もう一度しますか(1・・・はい/0・・・いいえ):");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}

void card_conv(unsigned x, int n, char d[])
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
            cno2[digits++] = dchar[x % n];
            x /= n;
        }
    }

    // cno2[]からd[]に逆に詰め直す

    for (int i = 0; i < digits; i++) 
    {
        printf("%3c", cno2[i]);
    }
    printf("\n");

    //return digits;
}