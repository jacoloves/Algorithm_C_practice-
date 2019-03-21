#include <stdio.h>

typedef struct {
    int y;
    int m;
    int d;
} Date;

Date DateOf(int y, int m, int d);

Date After(Date x, int n);

Date Before(Date x, int n);

int isleap(int year);

int main(void)
{
    int y, m, d, a, b;
    Date test_day;
    Date after_day;
    Date before_day;

    y = 2018;
    m = 9;
    d = 20;

    printf("日付を何日進めますか？：");
    scanf("%d", &a);

    printf("日付を何日戻しますか？：");
    scanf("%d", &b);

    test_day = DateOf(y, m, d);
    after_day = After(test_day, a);
    before_day = Before(test_day, b);

    printf("%d年%d月%d日ですね。\n", test_day.y, test_day.m, test_day.d);
    printf("--- 日付を進めると ---\n");
    printf("%d年%d月%d日ですね。\n", after_day.y, after_day.m, after_day.d);
    printf("--- 日付を戻すと ---\n");
    printf("%d年%d月%d日ですね。\n", before_day.y, before_day.m, before_day.d);

    return 0;
}

Date DateOf(int y, int m, int d)
{
    Date today;

    today.y = y;
    today.m = m;
    today.d = d;

    return today;
}

Date After(Date x, int n)
{
    int uru_flg;
    int loop_end_cnt = 0;
    x.d += n;

    while(loop_end_cnt == 0){
        uru_flg = isleap(x.y);

        if(x.m == 1 || x.m == 3 || x.m == 5 || x.m == 7 || x.m == 8 || x.m == 10 || x.m == 12){
            if(x.d <= 31){
                loop_end_cnt = 1;
            }

            if(x.d > 31){
                x.d = x.d - 31;
                x.m += 1;
            }
        }else if(x.m == 4 || x.m == 6 || x.m == 9 || x.m == 11){
            if(x.d <= 30){
                loop_end_cnt = 1;
            }

            if(x.d > 30){
                x.d = x.d - 30;
                x.m += 1;
            }
        }else if(x.m == 2){
            if(uru_flg == 0){
                if(x.d <= 28){
                    loop_end_cnt = 1;
                }

                if(x.d > 28){
                    x.d = x.d - 28;
                    x.m += 1;
                }
            }else if(uru_flg == 1){
                if(x.d <= 29){
                    loop_end_cnt = 1;
                }

                if(x.d > 29){
                    x.d = x.d - 29;
                    x.m += 1;
                }
            }
        }

        if(x.m == 13){
            x.y += 1;
            x.m = 1;
        }
    }
    return x;
}

int isleap(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

Date Before(Date x, int n)
{
    int uru_flg;
    int loop_end_cnt = 0;
    x.d -= n;

    while(loop_end_cnt == 0){
        uru_flg = isleap(x.y);

        if(x.m == 1 || x.m == 3 || x.m == 5 || x.m == 7 || x.m == 8 || x.m == 10 || x.m == 12){
            if(x.d >= 1){
                loop_end_cnt = 1;
            }

            if(x.d < 1){
                x.d = x.d + 31;
                x.m -= 1;
            }
        }else if(x.m == 4 || x.m == 6 || x.m == 9 || x.m == 11){
            if(x.d >= 1){
                loop_end_cnt = 1;
            }

            if(x.d < 1){
                x.d = x.d + 30;
                x.m -= 1;
            }
        }else if(x.m == 2){
            if(x.d > 1){
                loop_end_cnt = 1;
            }

            if(uru_flg == 0){
                if(x.d < 1){
                    x.d = x.d + 28;
                    x.m -= 1;
                }
            }else if(uru_flg == 1){
                if(x.d < 1){
                    x.d = x.d + 29;
                    x.m -= 1;
                }
            }
        }

        if(x.m == 0){
            x.y -= 1;
            x.m = 12;
        }
    }
    return x;
}
