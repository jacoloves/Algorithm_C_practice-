#include <stdio.h>

int cube(int x){
	return x * x * x;
}

int main(void)
{
	int x;

	printf("整数を入力してください。\n");
	printf("整数:"); scanf("%d", &x);

	printf("xの3乗は%dです。\n", cube(x));

	return 0;
}