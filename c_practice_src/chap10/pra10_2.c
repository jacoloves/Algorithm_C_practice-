//めんどくさいので今回は閏年を考慮しない
#include <stdio.h>

//-1日
void decrement_date(int *y, int *m, int *d);

//+1日
void increment_date(int *y, int *m, int *d);

int main(void)
{
    int year, month, day;

    printf("年を入力してください:");
    scanf("%d", &year);

    printf("月を入力して下さい：");
    do{
        scanf("%d", &month);
    } while( month < 1 || month > 12);

    printf("日を入力して下さい：");
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        do{
            scanf("%d", &day);
        } while( day < 1 || day > 31);
    }else if(month == 4 || month == 6 || month == 9 || month == 11){
        do{
            scanf("%d", &day);
        } while( day < 1 || day > 30);
    }else if(month == 2){
        do{
            scanf("%d", &day);
        } while( day < 1 || day > 28);
    }

    int num;
    printf("値を入力して下さい（1・・・-1日、2・・・+1日）：");
    do{
        scanf("%d", &num);
    } while(num < 0 || num > 3);

    if(num == 1){
        decrement_date(&year, &month, &day);
    }else if(num == 2){
        increment_date(&year, &month, &day);
    }

    printf("結果は%d年%d月%d日です。\n", year, month, day);

}

void decrement_date(int *y, int *m, int *d)
{
    *d = *d - 1;

    //d=0になる場合
    if(*d == 0){
        *m = *m - 1;
        //m=0になる場合
        if(*m == 0){
            *y = *y - 1;
            *m = 12;
        }
        //月によって最終日が変わるため分岐させる
        if(*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12){
            *d = 31;
        }else if(*m == 4 || *m == 6 || *m == 9 || *m == 11){
            *d = 30;
        }else if(*m == 2){
            *d = 28;
        }
    }
}

void increment_date(int *y, int *m, int *d)
{
    *d = *d + 1;

    if(*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12){
        //*d=32の時
        if(*d == 32){
            *m = *m + 1;
            //*m=13の時
            if(*m == 13){
                *y = *y + 1;
                *m = *m + 1;
            }
            *d = 1;
        }
    }else if(*m == 4 || *m == 6 || *m == 9 || *m == 11){
        //*d=31の時
        if(*d == 31){
            *m = *m + 1;
            *d = 1;
        }
    }else if(*m ==  2){
        //*d=28のとき
        if(*d == 29){
            *m = *m + 1;
            *d = 1;
        }
    }
}