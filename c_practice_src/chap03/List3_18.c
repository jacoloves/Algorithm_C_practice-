#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください：");
	scanf("%d", &no);

	if(no % 3 == 0)
		puts("その後は3で割り切れます。");
	else if(no % 3 == 0)
		puts("その数は3で割った剰余は1です。");
	else
		puts("その数は3で割った剰余は2です。");

	return 0;
}