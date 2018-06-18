#include <stdio.h>

int main(void)
{
	int value;

	printf("整数を入力してください：");
	scanf("%d", &value);

	if(value < 0)
		value = -value;

	printf("絶対値は%dです。\n", value);

	return 0;
}