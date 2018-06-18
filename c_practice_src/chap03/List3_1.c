#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください:");
	scanf("%d", &no);

	if(no % 5)
		puts("その数は5で割り切れません。");

	return 0;
}