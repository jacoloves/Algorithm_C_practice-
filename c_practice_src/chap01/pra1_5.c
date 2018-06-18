#include <stdio.h>

int main(void)
{
	int a;

	printf("整数を入力してください:");
	scanf("%d", &a);

	printf("%dに12を加えると%dです。\n", a, a + 12);

	return 0;
}