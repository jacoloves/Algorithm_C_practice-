#include <stdio.h>

int main(void)
{
	int vx, vy;

	puts("二つの整数を入力してください。");
	printf("整数vx："); scanf("%d", &vx);
	printf("整数vy："); scanf("%d", &vy);

	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n", vx % vy);

	return 0;
}