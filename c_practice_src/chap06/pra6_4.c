#include <stdio.h>

int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(sqr(x));
}

int main(void)
{
	int a;

	printf("整数を入力してください。\n");
	printf("整数：");
	scanf("%d", &a);

	printf("aの4乗は%dです。\n", pow4(a));

	return 0;
}