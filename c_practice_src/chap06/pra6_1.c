#include <stdio.h>

int min2(int a, int b)
{
	int min = a;

	if(min > b){
		min = b;
	}

	return min;
}

int main(void)
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数a："); scanf("%d", &a);
	printf("整数b："); scanf("%d", &b);

	printf("最小値は%dです。\n", min2(a, b));

	return 0;
}