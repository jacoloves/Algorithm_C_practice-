#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	puts("四つの整数を入力してください。");
	printf("整数1:"); scanf("%d", &a);
	printf("整数2:"); scanf("%d", &b);
	printf("整数3:"); scanf("%d", &c);
	printf("整数4:"); scanf("%d", &d);

	if(a > b)
		if(a > c)
			if(a > d)
				printf("大きい方の値は%dです。\n", a);
			else if(a < d)
				printf("大きい方の値は%dです。\n", d);
		else if(a < c)
			printf("大きい方の値は%dです。\n", c);

	if(b > a)
		if(b > c)
			if(b > d)
				printf("大きい方の値は%dです。\n", b);
			else if(b < d)
				printf("大きい方の値は%dです。\n", d);
		else if(b < c)
			printf("大きい方の値は%dです。\n", c);

	if(c > a)
		if(c > b)
			if(c > d)
				printf("大きい方の値は%dです。\n", c);
			else
				printf("大きい方の値は%dです。\n", d);

	if(d > a)
		if(d > b)
			if(d > c)
				printf("大きい方の値は%dです。\n", d);
			else
				printf("大きい方の値は%dです。\n", c);

	return 0;
}