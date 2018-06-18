#include <stdio.h>

int main(void)
{
	int no, retry;

	do{
		printf("整数を入力してください：");
		scanf("%d", &no);

		if(no == 0){
			puts("その数は0です。");
		}else if(no > 0){
			puts("その数は正です。");
		}else{
			puts("その数は負です。");
		}

		printf("まだ続けますか?・・・【0・・・Yes/9・・・No】:");
		scanf("%d", &retry);
	}while(retry == 0);
	
	return 0;
}