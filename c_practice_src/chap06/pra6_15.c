#include <stdio.h>

void put_count();

int main(void)
{
	int num;
	
	printf("整数を代入してください。");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		put_count();
	}

	return 0;
}

void put_count()
{
	static int a = 1;

	printf("put_count:%d回目\n", a++);
}