#include <stdio.h>

int main(void)
{
	int sum, num;

	sum = 0;

	printf("nの値：");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		sum += i;
	}

	printf("1から%dまでの和は%dです。\n", num, sum);
}