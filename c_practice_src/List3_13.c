#include <stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("三つの整数を入力してください。");
	printf("整数1："); scanf("%d", &n1);
	printf("整数2："); scanf("%d", &n2);
	printf("整数3："); scanf("%d", &n3);

	max = n1;
	if(n2 > max) max = n2;
	if(n3 > max) max = n3;

	printf("最大値は%dです。\n", max);

	return 0;
}