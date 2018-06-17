#include <stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("三つの整数を入力してください。");
	printf("整数A:"); scanf("%d", &n1);
	printf("整数B:"); scanf("%d", &n2);
	printf("整数C:"); scanf("%d", &n3);

	max = (n1 > n2) ? n1 : n2;
	max = (max > n3) ? max : n3;

	printf("大きい方の値は%dです。\n", max);

	return 0;
}
