#include <stdio.h>

int main(void)
{
	int n1, n2, max, min;

	puts("二つの整数を入力してください。");
	printf("整数1："); scanf("%d", &n1);
	printf("整数2："); scanf("%d", &n2);

	if(n1 > n2){
		max = n1;
		min = n2;
	}else{
		max = n2;
		min = n1;
	}

	printf("大きい方の値は%dです。\n", max);
	printf("小さい方の値は%dです。\n", min);

	return 0;
}