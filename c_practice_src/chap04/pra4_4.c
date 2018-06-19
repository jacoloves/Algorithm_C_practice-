#include <stdio.h>

int main(void)
{
	int no, tmp;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	tmp = no;

	while(no >= 1)
		printf("%d ", no--);

	if(tmp > 0)
		printf("\n");

	return 0;
}