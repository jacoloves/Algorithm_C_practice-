/*
サンプルテスト(動的メモリ確保)
*/

#include <stdio.h>
#include <stdlib.h>
#include "stTestData.h"


/* プロトタイプ宣言 */
int ArrayPlus(sttest_data *p, int *num);

/* メイン関数 */
int main(void)
{
	int area_number = 10;
	int Exe_Flag;
	sttest_data *p_pstData;
	
	Exe_Flag = ArrayPlus(p_pstData, &area_number);
	
	return Exe_Flag;
}

/* 配列領域拡張関数 */
int ArrayPlus(sttest_data *p, int *num)
{
	/* メモリ確保 */
	p = (sttest_data *)malloc(sizeof(sttest_data)*num);
	if (p == NULL) {
		printf(ArrayFail");
	}
	
	return 0;
}