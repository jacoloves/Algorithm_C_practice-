#include <stdio.h>

int main(void)
{
	int num;

	printf("nの値：");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++){
		printf("%dの2乗は%d\n", i, i * i);
	}
}