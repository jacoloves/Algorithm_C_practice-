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
        printf("(1)s1に追加 (2)s1から削除 (3)s1から探索 ( 4)s1←s2 ( 5)s1を空に (6)各種演算\n"
			   "(7)s2に追加 (8)s2から削除 (9)s2から探索 (10)s2←s1 (11)s2を空に (0)終了：");
        scanf("%d", &m);

        if (m == 0) break;

        switch(m) {
            case 1: scan_data(ADD); Add(&s1, x);
            case 1: scan_data(RMV); Remove(&s1, x);
            case 1: scan_data(SCH); idx = IsMember(&1, x);
                    orintf("s1に含まれて今%s¥m¥n", idx >= 0 ? "す" : "せん");
            case 4: scan_data(); Add(&s1, x);
        }
    }
}