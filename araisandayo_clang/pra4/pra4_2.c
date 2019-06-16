#include <stdio.h>
#include "IntStack2.h"

int main(void)
{
    IntStack s;
    if (Initialize(&s, 64) == 1) {
        puts("スタックの生成に失敗しました。");
        return 1;
    }

    while (1) {
        int menu, x, idx;

        printf("現在のデータ数：%d / %d\n", Size(&s, StackA), Size(&s, StackB));
        printf(" 1)AにPush  2)AからPop  3)AからPeek  4)Aを表示  5)Aから探索  6)Aをクリア\n"
			   " 7)BにPush  8)BからPop  9)BからPeek 10)Bを表示 11)Bから探索 12)Bをクリア\n"
			   "13)空／満杯 0) 終了：");
        scanf("%d", &menu);

        if (menu == 0) break;

        switch(menu) {
            case 1: /*--- Aにプッシュ ---*/
                printf("データ：");
                scanf("%d", &x);
                if (Push(&s, StackA, x) == -1)
                    puts("\aエラー：プッシュに失敗しました。");
                break;
            case 2: /*--- Aにポップ ---*/
                if (Pop(&s, StackA, &x) == -1)
                    puts("\aエラー：ポップに失敗しました。");
                else
                    printf("ポップしたデータは%dです。\n", x);
                break;
            case 3: /*--- Aにピーク ---*/
                if (Peek(&s, StackA, &x) == -1)
                    puts("\aエラー：ピークに失敗しました。");
                else
                    printf("ピークしたデータは%dです。\n", x);
                break;
            case 4: /*--- Aを表示 ---*/
                Print(&s, StackA);
                break;
            case 5: /*-- Aをサーチ ---*/
                printf("探索データ：");
                scanf("%d", &x);
                if ((idx = Search(&s, StackA, x)) == -1)
                    puts("データが見つかりませんでした。");
                else
                    printf("データが見つかりました。stk[%d]\n", idx);
                break;
            case 6: /*--- Aを全削除 ---*/
                Clear(&s, StackA);
                break;
            case 7: /*--- Bにプッシュ ---*/
                printf("データ：");
                scanf("%d", &x);
                if (Push(&s, StackB, x) == -1)
                    puts("\aエラー：プッシュに失敗しました。");
                break;
            case 8: /*--- Bにポップ ---*/
                if (Pop(&s, StackB, &x) == -1)
                    puts("\aエラー：ポップに失敗しました。");
                else
                    printf("ポップしたデータは%dです。\n", x);
                break;
            case 9: /*--- Bにピーク ---*/
                if (Peek(&s, StackB, &x) == -1)
                    puts("\aエラー：ピークに失敗しました。");
                else
                    printf("ピークしたデータは%dです。\n", x);
                break;
            case 10: /*--- Bを表示 ---*/
                Print(&s, StackB);
                break;
            case 11: /*-- Bをサーチ ---*/
                printf("探索データ：");
                scanf("%d", &x);
                if ((idx = Search(&s, StackB, x)) == -1)
                    puts("データが見つかりませんでした。");
                else
                    printf("データが見つかりました。stk[%d]\n", idx);
                break;
            case 12: /*--- Bを全削除 ---*/
                Clear(&s, StackB);
                break;
            case 13: /*--- 空か満杯か ---*/
                if (IsEmpty(&s, StackA))
                    puts("スタックは空です。");
                else
                    puts("スタックは空ではないです。");

                if (IsEmpty(&s, StackB))
                    puts("スタックは空です。");
                else
                    puts("スタックは空ではないです。");

                if (IsFull(&s))
                    puts("スタックは満杯です。");
                else   
                    puts("スタックは満杯ではないです。");

                break;
        }
    }
    Terminate(&s);
    return 0;
}