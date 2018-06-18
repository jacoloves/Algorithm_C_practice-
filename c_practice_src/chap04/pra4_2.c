#include <stdio.h>

int main(void)
{
	int a, b, max, min, sum, max2, min2;

	puts("二つの整数を入力してください。");
	printf("整数a:"); scanf("%d", &a);
	printf("整数b:"); scanf("%d", &b);

	if(a > b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}

	max2 = max;
	min2 = min;

	do{
		sum = sum + min2;
		min2++;
	}while(max2 >= min2);

	printf("%d以上%d以下の全整数の和はは%dです。\n", min, max, sum);

	return 0;
}