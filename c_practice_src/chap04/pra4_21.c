#include <stdio.h>

int main(void)
{
	int num;

	printf("正方形を作ります。\n");
	printf("何段ですか：");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= num; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}