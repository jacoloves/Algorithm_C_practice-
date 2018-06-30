#include <stdio.h>

void rev_intntary(int v[], int n);

int main(void)
{
	int b;
	printf("整数	を入力してください。\n");
	printf("整数：");
	scanf("%d", &b);

	int x[b];

	for(int i = 0; i < b; i++){
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}

	//反転
	rev_intntary(x, b);

	puts("反転しました。");
	for(int i = 0; i < b; i++){
		printf("x[%d] = %d\n", i, x[i]);
	}

	return 0;
}

void rev_intntary(int v[], int n)
{
	int a = n / 2;

	for(int i = 0; i < a; i++){
		int temp = v[i];
		v[i] = v[(n - 1) - i];
		v[(n - 1) - i] = temp;
	}
}