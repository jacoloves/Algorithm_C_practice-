#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = {17, 23, 36};
	int b[5];
	int cnt = 1;

	for(i = 5; i > = 1; i--){
		b[cnt] = a[i];
		cnt++;
	}

	puts("   a   b");
	puts("---------");
	for(i=0; i<5; i++){
		printf("%4d%4d\n", a[i], b[i]);
	}

	return 0;
}