#include <stdio.h>

typedef struct {
    int y;
    int m;
    int d;
} Date;

Date DateOf(int y, int m, int d);

Date After(Date x, int n);

Date Before(Date x, int n);

int main(void)
{
    Date x, x2;
    int n;
    int y = 2019;
    int m = 6;
    int d = 9;

    x = DateOf(y, m, d);

    printf("年：%2d 月:%2d 日:%2d\n", x.y, x.m, x.d);

    printf("飛ばしたい日付を入力してください:");
    scanf("%d", &n);

    x2 = After(x, n);

    printf("年：%2d 月:%2d 日:%2d\n", x2.y, x2.m, x2.d);

    return 0;

}

Date DateOf(int y, int m, int d)
{
    Date tmp;
    Date *p = &tmp;

    p->y = y;
    p->m = m;
    p->d = d;

    return tmp;
}

Date After(Date x, int n)
{
    Date AfterTmp;
    int year = x.y;
    int month = x.m;
    int date = x.d;

    do {
        // 31日の月の場合
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 || n != 0)
        {
            while(1)
            {
                date++;
                n--;
                // 31日になったらloopをぬける
                if (date == 31)
                {
                    month++;
                    date = 0;
                    break;
                } else if (n == 0) {
                    if (date == 31)
                    {
                        month++;
                    }
                    break;
                }
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11 || n != 0) {
            while(1)
            {
                date++;
                n--;
                // 30日になったらloopをぬける
                if (date == 30)
                {
                    month++;
                    date = 0;
                    break;
                } else if (n == 0) {
                    if (date == 30)
                    {
                        month++;
                    }
                    break;
                }
            }
        } else if (month == 2 || n != 0) {
            while(1)
            {
                date++;
                n--;
                // 29日になったらloopをぬける
                if (date == 29)
                {
                    month++;
                    date = 0;
                    break;
                } else if (n == 0) {
                    if (date == 29)
                    {
                        month++;
                    }
                    break;
                }
            }
        }

        // 新年の判定
        if (month == 13) {
            year++;
            month = 1;
            date++;
            n--;
        }
    } while (n >= 0);

    AfterTmp = DateOf(year, month, date);

    return AfterTmp;
}