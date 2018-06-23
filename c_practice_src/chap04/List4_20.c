#include <stdio.h>

int main(void)
{
	int retry;

	do{
		int i, no;

		do{
			printf("正の整数を入力してください:");
			scanf("%d", &no);
			if(no <= 0)
				puts("\a正でない数は入力しないでください。");
		}while(no <= 0);

		for(i = 1; i <= no; i++)
			putchar('*');
		putchar('\n');

		printf("もう一度？【Yes・・・0/No・・・9】:");
		scanf("%d", &retry);
	}while(retry == 0);

	return 0;
}