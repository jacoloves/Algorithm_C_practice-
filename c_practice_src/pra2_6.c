#include <stdio.h>

int main(void)
{
	int height;

	printf("身長を入力してください：");
	scanf("%d", &height);

	double bmi = (height - 100) * 0.9;

	printf("標準体重は%.1fです。\n", bmi);

	return 0;
}