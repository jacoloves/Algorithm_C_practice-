#include <stdio.h>

enum calender { January = 1, Febrary, March, April, May, June, July, August, September, October, November, December, Invalid };

void january(void)
{
    puts("1月");
}

void febrary(void)
{
    puts("2月");
}


void march(void)
{
    puts("3月");
}

void april(void)
{
    puts("4月");
}

void may(void)
{
    puts("5月");
}

void june(void)
{
    puts("6月");
}

void july(void)
{
    puts("7月");
}

void august(void)
{
    puts("8月");
}

void september(void)
{
    puts("9月");
}

void october(void)
{
    puts("10月");
}

void november(void)
{
    puts("11月");
}

void december(void)
{
    puts("12月");
}

enum calender select(void)
{
    int tmp;

    do{
        printf("1・・・1月 2・・・2月 3・・・3月 4・・・4月 5・・・5月 6・・・6月 7・・・7月 8・・・8月 9・・・9月 10・・・10月 11・・・11月 12・・・12月:");
        scanf("%d", &tmp);
    } while(tmp < January | tmp > Invalid);

    return tmp;
}

int main(void)
{
    enum calender selected;

    do{
        switch(selected = select()){
            case January : january(); break;
            case Febrary : febrary(); break;
            case March : march(); break;
            case April : april(); break;
            case May : may(); break;
            case June : june(); break;
            case July : july(); break;
            case August : august(); break;
            case September : september(); break;
            case October : october(); break;
            case November : november(); break;
            case December : december(); break;
        }
    } while (selected != Invalid);
    return 0;
}




