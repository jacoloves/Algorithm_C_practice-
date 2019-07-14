#include <stdio.h>
#include "IntSet.h"

enum {ADD, RMV, SCH};

int scan_data(int sw)
{
    int data;
    switch (sw) {
        case ADD: printf("追加するデータ："); break;
        case RMV: printf("削除するデータ："); break;
        case SCH: printf("探索するデータ："); break;
    }
    scanf("%d", &data);
    return data;
}

int main(void)
{
    IntSet s1, s2, temp;
    Initialize(&s1, 512);
    Initialize(&s2, 512);
    Initialize(&temp, 512);

    while(1) {
        int m, x, idx;

        printf("s1 = "); PrintLn(&s1);
        printf("s2 = "); PrintLn(&s2);
