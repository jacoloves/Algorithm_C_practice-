#include <stdio.h>

int main(void)
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数A:"); scanf("%d", &a);
	printf("整数B:"); scanf("%d", &b);

	if(a % b)
		puts("BはAの約数ではありません。");
	else
		puts("BはAの約数です。");

	return 0;
}