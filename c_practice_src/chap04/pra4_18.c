#include <stdio.h>

int main(void)
{
	int num;

	printf("何個*を表示しますか：");
	scanf("%d", &num);

	for(int i = 1; i <= num, i++){
		printf("*");
		if(i % 5 == 0){
			printf("\n");
		}
	}

	return  0;
}