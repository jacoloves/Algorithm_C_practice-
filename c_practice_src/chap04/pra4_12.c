#include <stdio.h>

int main(void)
{
	int no, cnt;
	cnt = 0;

	do{
		printf("正の整数を入力してください：");
		scanf("%d", &no);
		if(no <= 0)
			puts("\a正でない数を入力してください。");
	}while(no <= 0);

	printf("%dは", no);
	while(no > 0){
		no /= 10;
		cnt++;
	}
	
	printf("%d桁です。\n", cnt);

	return 0;
}