#include <stdio.h>

int main(void)
{
	int a;

	printf("整数を入力してください：");
	scanf("%d", &a);

	printf("%dから6を減じると%dです。\n", a, a - 6);

	return 0;
}