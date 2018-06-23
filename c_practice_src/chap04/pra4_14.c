#include <stdio.h>

int main(void)
{
	int num, sum;

	printf("正の整数を入力してください:");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		sum = i % 10;

		printf("%d", sum);
	}

	printf("\n");
}