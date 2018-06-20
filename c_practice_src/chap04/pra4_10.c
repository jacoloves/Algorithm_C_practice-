#include <stdio.h>

int main(void)
{
	int num;

	printf("正の整数：");
	scanf("%d", &num);

	while(num > 0){
		printf("*\n");
		num--;
	}

	return 0;
}