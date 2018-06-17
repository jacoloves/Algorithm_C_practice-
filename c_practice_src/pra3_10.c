#include <stdio.h>

int main(void)
{
	int a, b, c;

	puts("三つの整数を入力してください。");
	printf("整数A:"); scanf("%d", &a);
	printf("整数B:"); scanf("%d", &b);
	printf("整数C:"); scanf("%d", &c);

	if((a == b) && (b == c)){
		printf("三つの値は等しいです。\n");
	}else if((a == b) || (b == c) || (a == c)){
		printf("二つの値は等しいです。\n");
	}else{
		printf("三つの値は異なります。\n");
	}

	return 0;

}