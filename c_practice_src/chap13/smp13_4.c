#include <time.h>
#include <stdio.h>

int main()
{
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    char *wday_name[] = {"日", "月", "火", "水", "木", "金", "土"};

    printf("現在の日付・時刻は%d年%d月％d日(%s) %d時%d分%d秒です.\n",
        timer->tm_year + 1900,
        timer->tm_mon + 1,
        timer->tm_mday,
        wday_name[timer->tm_wday],
        timer->tm_hour,
        timer->tm_min,
        timer->tm_sec
    );

    return 0;
}