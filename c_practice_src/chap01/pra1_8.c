#include <stdio.h>

int main(void)
{
	int a, b;

	puts("二つの整数を入力してください。");

	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);

	printf("それらの積は%dです。\n", a * b);

	return 0;
}