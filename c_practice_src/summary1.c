#include <stdio.h>

int main(void)
{
	int width;
	int height;

	puts("長方形の面積を求めます。");

	printf("横幅:");
	scanf("%d", &width);

	printf("高さ：");
	scanf("%d", &height);

	printf("面積は%dです。\a\n", width * height);

	return 0;
}