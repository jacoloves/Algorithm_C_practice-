#include <stdio.h>

int main(void)
{
	int i, n;

	printf("整数値：");
	scanf("%d", &n);

	for(i = 2; i <= n; i += 2)
		printf("%d ", i);
	putchar('\n');

	return 0;
}