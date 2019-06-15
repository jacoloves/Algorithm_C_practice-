#include <stdio.h>
#include "ArrayIntQueue.h"

int main(void)
{
    ArrayIntQueue q;
    if (Initialize(&q, 64) == 1) {
        puts("キューの生成に失敗しました。");
        return 1;
    }

    while (1) {
        int menu, x, idx;

        printf("現在のデータ数：%d / %d\n", Size(&q), Capacity(&q));
        printf("(1)キュー (2)でキュー (3)ピーク (4)表示 (5)全削除 (6)空かどうか (7)満杯か (8)サーチ (0)終了：");
        scanf("%d", &menu);

        if (menu == 0) break;

        switch(menu) {
            case 1: /*--- エンキュー ---*/
                printf("データ：");
                scanf("%d", &x);
                if (Enque(&q, x) == -1)
                    puts("\aエラー：エンキューに失敗しました。");
                break;
            case 2: /*--- デキュー ---*/
                if (Deque(&q, &x) == -1)
                    puts("\aエラー：デキューに失敗しました。");
                else
                    printf("デキューしたデータは%dです。\n", x);
                break;
            case 3: /*--- ピーク ---*/
                if (Peek(&q, &x) == -1)
                    puts("\aエラー：ピークに失敗しました。");
                else
                    printf("ピークしたデータは%dです。\n", x);
                break;
            case 4: /*--- 表示 ---*/
                Print(&q);
                break;
            case 5: /*--- 全削除 ---*/
                Clear(&q);
                break;
            case 6: /*-- スタックは空か ---*/
                if (IsEmpty(&q))
                    puts("スタックは空です。");
                else
                    puts("スタックは空ではないです。");
                break;
            case 7: /*-- スタックは満杯か ---*/
                if (IsFull(&q))
                    puts("スタックは満杯です。");
                else   
                    puts("スタックは満杯ではないです。");
                break;
            case 8: /*-- サーチ ---*/
                printf("探索データ：");
                scanf("%d", &x);
                if ((idx = Search(&q, x)) == -1)
                    puts("データが見つかりませんでした。");
                else
                    printf("データが見つかりました。que[%d]\n", idx);
                break;
        }
    }
    Terminate(&q);
    return 0;
}