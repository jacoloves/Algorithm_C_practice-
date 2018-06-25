#include <stdio.h>

int main(void)
{
	int i;
	int v[5];

	for(i = 5; i >= 1; i--){
		v[i] = i;
	}

	for(i = 0; i < 5; i++){
		printf("v[%d] = %d\n", i, v[i]);
	}

	return 0;
}