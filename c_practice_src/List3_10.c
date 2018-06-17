#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください:");
	scanf("%d", &no);

	if(no > 0)
		if(no % 2 == 0)
			puts("その数は偶数です。");
		else
			puts("その数は奇数です。");
	else
		puts("正でない値が入力されました。\a\n");

	return 0;
}