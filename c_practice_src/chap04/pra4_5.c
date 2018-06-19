#include <stdio.h>

int main(void)
{
	int i, no, tmp;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	tmp = no;

	i = 1;
	while(i <= no)
		printf("%d ", i++);

	if(tmp > 0)
		printf("\n");

	return 0;
}