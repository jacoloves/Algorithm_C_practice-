#include <stdio.h>

int main(void)
{
	int a, b, ans;

	puts("二つの整数を言入力してください。");
	printf("整数A:"); scanf("%d", &a);
	printf("整数B:"); scanf("%d", &b);

	ans = (a > b) ? a - b : b - a;

	if(ans <= 10){
		printf("それらの差は10以下です。\n");
	}else{
		printf("それらの差は11以上です。\n");
	}
}