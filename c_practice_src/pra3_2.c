#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	if(no == 0)
		puts("その数は0です。");
	else if(no > 0)
		puts("その数は正です。");
	else if(no < 0)
		puts("その数は負です。");

	return 0;
}