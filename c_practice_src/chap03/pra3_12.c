#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	int sw = no % 2;

	switch(sw){
		case 1 : puts("その数は奇数です。"); break;
		default : puts("その数は偶数です。");
	}

	return 0;
}