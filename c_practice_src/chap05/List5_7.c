#include <stdio.h>

#define NUMBER 10

int main(void)
{
	int num;
	int data[NUMBER]；

	printf("データ数：");
	do{
		scanf("%d", &num);
		if(num < 1 || num > num){
			printf("\a1～%dで入力してください：", NUMBER);
		}
	}while(num < 1 || num > NUMBER);

	for(int i = 0; i < num; i++){
		printf("%d番：", i + 1);
		scanf("%d", &data[i]);
	}

	printf("{");
	for(int i = 0; i < num; i++){

		if(i == num - 1){
			printf("%d}", data[i]);
			printf("\n");
		}else{
			printf("%d, ", data[i]);
		}
	}

	return 0;
}