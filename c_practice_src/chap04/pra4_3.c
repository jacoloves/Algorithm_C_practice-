#include <stdio.h>

int main(void)
{
	int no, tmp;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	tmp = no;

	while(no >= 0){
		printf("%d ", no);
		no--;
	}

	if(tmp >= 0){
		printf("\n");
	}

	return 0;
}