#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	IntQueue que;
	if (Initialize(&que, 64) == -1) {
		puts("キューの生成に失敗しました。");
		return 1;
	}

	while(1) {
		int m, x, idx;
		printf("現在のデータ数：%d / %d\n", Size(&que), Capacity(&que));
        printf("（１）エンキュー　（２）デキュー　（３）ピーク　（４）表示　（５）検索　（６）削除　（７）空か満杯か（０）終了");
        scanf("%d", &m);

        if (m == 0) break;

        switch(m) {
            case 1:
                printf("データ："); scanf("%d", &x);
                if (Enque(&que, x) == -1)
                        puts("\aエラー：エンキューに失敗しました。");
                break;
            case 2:
                if (Deque(&que, &x) == -1)
                    puts("\aエラー：デキューに失敗しました。");
                else
                    printf("デキューしたデータは%dです。\n", x);
                break;
            case 3:
                if (Peek(&que, &x) == -1)
                    puts("\aエラー：ピークに失敗しました。");
                else
                    printf("ピークしたデータは%dです。\n", x);
                break;
            case 4:
                Print(&que);
                break;
            case 5:
                printf("データ："); scanf("%d", &x);
                if ((idx = Search2(&que, x)) == 99) {
                    puts("検索した値は見つかりませんでした。");
                } else {
                    printf("先頭から数えると：%d個目\n", idx);
                }
                break;
            case 6:
                Clear(&que);
                break;
            case 7:
                if (IsEmpty(&que)) {
                    puts("空です。");
                else if (IsFull(&que)) {
                    puts("満杯です。");
                } else {
                    puts("空でも満杯でもありません。");
                }
                break;
      }
    }
    Terminate(&que);
    return 0;
}
