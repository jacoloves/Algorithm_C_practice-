#include <stdio.h>

int main(void)
{

	int num;

	printf("ピラミッドを作ります。\n");
	printf("何段ですか：");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		for(int j = num - i; j > 0; j--){
			printf(" ");
		}
		for(int k = 1; k <= (i - 1) * 2 + 1; k++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}