#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("右下直角二等辺三角形を作ります。");
	printf("短辺：");
	scanf("%d", &len);

	for(i = 1; i <= len; i++){
		for(j = 1; j <= len - i; j++)
			putchar(' ');
		for(j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}