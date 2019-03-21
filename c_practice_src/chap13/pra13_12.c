#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";

void get_data(void)
{
    FILE *fp;

    if((fp = fopen(data_file, "r")) == NULL){
        printf("本プログラムを実行するのは初めてですね。\n");
    }else{
        int year, month, day, h, m, s;

        fread(&year, size_of(int), 1, fp);
        
        printf("前回は%d年%d月%d日%d時%d分%d秒でした。\n", year, month, day, h, m, s);

        fclose(fp);
    }
}

void put_data(void)
{
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if((fp = fopen(data_file, "w")) == NULL){
        printf("\aファイルをオープンできません。\n");
    }else{
        fprintf(fp, "%d %d %d %d %d %d\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
        fclose(fp);
    }
}

int main(void)
{
    get_data();

    put_data();

    return 0;
}