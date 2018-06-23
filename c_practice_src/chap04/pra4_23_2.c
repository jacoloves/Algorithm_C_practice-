#include <stdio.h>

int main(void)
{
	int num, cnt1, cnt2;

	printf("右上直角三角形を作ります。\n");
    printf("短辺:");
    scanf("%d", &num);

    cnt1 = 0;
    cnt2 = num;

    for(int i=1; i<=num; i++){
    	for(int j = 0; j < cnt1; j++){
    		printf(" ");
    	}

    	for(int k = 1; k <= cnt2; k++){
    		printf("*");
    	}
    	printf("\n");
    	cnt1++;
    	cnt2--;
    }

    return 0;
}