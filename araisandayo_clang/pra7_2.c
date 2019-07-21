#include <stdio.h>
#include "SortedIntSet.h"

enum { ADD, RMV, SCH};

int scan_data(int sw)
{
    int data;

    switch (sw) {
        case ADD: printf("追加するデータ："); break;
        case RMV: printf("削除するデータ："); break;
        case SCH: printf("探索するデータ："); break;
    }
    scanf("%d" , &data);

    return data;
}

int main()
{
    SortedIntSet s1, s2, temp;
    Initialize(&s1, 10); Initialize(&2, 10); Initialize(&temp, 10);

    while(1) {
        int m, x, idx;

        printf("s1 = "); print(&s1); printf("  %s¥n", IsFull(&s1) ? "満杯" : "");
        printf("s2 = "); print(&s2); printf("  %s¥n", IsFull(&s2) ? "満杯" : "");
    }
}