#include <stdio.h>

int mdays[][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

int isleap(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

int dayofyear(int y, int m, int d)
{
    int cnt = 1;

    while(cnt < m){
        d += mdays[isleap(y)][cnt - 1];
        cnt++;
    }

    return d;
}

int main(void)
{
    int year, month, day;
    int retry;

    do{
        printf("年："); scanf("%d", &year);
        printf("月："); scanf("%d", &month);
        printf("日："); scanf("%d", &day);

        printf("年内で%d日目です。\n", dayofyear(year, month, day));

        printf("もう一度しますか（１・・・はい/０・・・いいえ）：");
        scanf("%d", &retry);
    }while(retry == 1);

    return 0;
}