#include <stdio.h>

int main(void)
{
	static double a[5];

	for(int i = 0; i < 5; i++){
		printf("a[%d] = %.1f\n", i, a[i]);
	}

	return 0;
}