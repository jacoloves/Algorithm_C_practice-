#include <stdio.h>

int main(void)
{
	int i, no, tmp;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	tmp = no;

	i = 2;
	while(i <= no){
		if(i % 2 == 0){
			printf("%d ", i);
		}
		i++;
	}

	if(tmp > 0)
		printf("\n");

	return 0;
}