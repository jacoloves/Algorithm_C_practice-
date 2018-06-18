#include <stdio.h>

int main(void)
{
	int a,b;

	puts("二つの整数を入力してください。");
	printf("整数a:"); scanf("%d", &a);
	printf("整数b:"); scanf("%d", &b);

	double sum = (double)a/b;

	printf("aの値はbの%f%です。\n", sum * 100);

	return 0;
}