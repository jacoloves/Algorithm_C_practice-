#include <stdio.h>

int sumup(int n)
{
	int sum = 0;

	for(int i = 1; i <= n; i++){
		sum += i;
	}

	return sum;
}

int main(void)
{
	int a;

	printf("整数を入力してください。\n");
	printf("整数：");
	scanf("%d", &a);

	printf("1から%dまでの全整数の和は%dです。\n", a, sumup(a));

	return 0;
}