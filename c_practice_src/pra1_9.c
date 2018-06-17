#include <stdio.h>

int main(void)
{
	int a, b, c;

	puts("三つの整数を入力してください。");

	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);
	printf("整数3："); scanf("%d", &c);

	printf("それらの和は%dです。\n", a + b + c);

	return 0;
}