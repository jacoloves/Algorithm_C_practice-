#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n);

int main(void)
{
	int a;
	printf("整数	を入力してください。\n");
	printf("整数：");
	scanf("%d", &a);

	int x[a];
	int y[a];

	for(int i = 0; i < a; i++){
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}

	//反転
	intary_rcpy(y, x, a);

	puts("反転しました。");
	for(int i = 0; i < a; i++){
		printf("y[%d] = %d\n", i, y[i]);
	}

	return 0;
}

void intary_rcpy(int v1[], const int v2[], int n)
{
	//コピー
	for(int i = 0; i < n; i++){
		v1[i] = v2[i];
	}

	int a = n / 2;

	//コピーを反転
	for(int i = 0; i < a; i++){
		int temp = v1[i];
		v1[i] = v1[(n - 1) - i];
		v1[(n - 1) - i] = temp;
	}
}

