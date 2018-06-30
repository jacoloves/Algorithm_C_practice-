#include <stdio.h>

void alert(int n)
{
	for(int i = 0; i<= n; i++){
		printf("警報\a\n");
	}
}

int main(void)
{
	int a;

	printf("整数を入力してください。\n");
	printf("整数：");
	scanf("%d", &a);

	printf("%d回警報を鳴らします。\n", a);

	alert(a);

	return 0;
}