#include <stdio.h>

int main(void)
{
	int i, no, tmp, tmp2;
	//2のべき乗カウント
	int cnt = 1;
	//合計
	int sum = 2;

	printf("正の整数を入力してください：");
	scanf("%d", &no);

	tmp = no;

	i = 2;
	while(i <= no){
		if(i % 2 == 0){
			if(sum == i){
				print("%d", i);
				tmp2 = cnt;
				cnt++;
				printf("%d", cnt);
				while(tmp2 > 0){
					sum = sum * 2;
					tmp2--;
				}
			}
		}
		i++;
	}

	if(tmp > 0)
		printf("\n");

	return 0;
}