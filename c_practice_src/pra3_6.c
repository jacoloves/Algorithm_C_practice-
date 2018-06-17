#include <stdio.h>

int main(void)
{
	int a, b, c;

	puts("三つの整数を入力してください。");
	printf("整数1:"); scanf("%d", &a);
	printf("整数2:"); scanf("%d", &b);
	printf("整数3:"); scanf("%d", &c);

	if(a > b)
		if(a > c)
			printf("大きい方の値は%dです。\n", a);
		else if(a < c)
			printf("大きい方の値は%dです。\n", c);

	if(b > a)
		if(b > c)
			printf("大きい方の値は%dです。\n", b);
		else if(b < c)
			printf("大きい方の値は%dです。\n", c);

	return 0;
}