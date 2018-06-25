#include <stdio.h>

int main(void)
{
	int num;

	printf("下向き数字ピラミッドを作ります。\n");
	printf("何段ですか：");
	scanf("%d", &num);

	int cnt = 1;

	for(int i = num; i >= 1; i--){
		for(int k = 1; k < cnt; k++){
				printf(" ");
		}
		for(int j = 1; j <= (i - 1) * 2 + 1; j++){
			printf("%d", cnt % 10);
		}

		cnt++;
		printf("\n");
	}

	return 0;
}