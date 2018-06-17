#include <stdio.h>

int main(void)
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数a:"); scanf("%d", &a);
	printf("整数b:"); scanf("%d", &b);

	printf("それらの平均は%fです。\n", (double)(a + b)/2);

	return 0;
}