#include <stdio.h>

int main(void)
{
	int num, cnt;

	printf("正の整数：");
	scanf("%d", &num);

	cnt = 1;

	while(cnt <= num){
		if((cnt % 2) == 1){
			printf("+");
		}else{
			printf("-");
		}
		cnt++;
	}

	printf("\n");

	return 0;
} 