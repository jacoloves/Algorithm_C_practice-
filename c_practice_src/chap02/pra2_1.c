#include <stdio.h>

int main(void)
{
	int a,b;

	puts("二つの整数を入力してください。");
	printf("整数x："); scanf("%d", &a);
	printf("整数y："); scanf("%d", &b);

	double wa = (double)a / (double)b;
	int sum = wa * 100;

	printf("xの値はyの%d\%です。\n", sum);

	return 0;
}