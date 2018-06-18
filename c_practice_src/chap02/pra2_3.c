#include <stdio.h>

int main(void)
{
	double a;

	printf("実数を入力してください：");
	scanf("%lf", &a);

	printf("あなたは%fと入力しましたね。\n", a);

	return 0;
}