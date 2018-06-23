#include <stdio.h>

int main(void)
{
	int a, b, max, min;

	printf("横長の超保形を作ります。\n");
	printf("一辺（その1）："); scanf("%d", &a);
	printf("一辺（その2）："); scanf("%d", &b);

	if(a > b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}

	for(int i = 1; i <= min; i++){
		for(int j = 1; j <= max; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}