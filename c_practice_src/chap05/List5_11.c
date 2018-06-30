#include <stdio.h>

int main(void)
{
	int tensu[6][2];
	int sum;
	double avg;

	for(int i = 0; i < 6; i++){
		printf("◆%d人目◆\n", i + 1);
		for(int j = 0; j < 2; j++){
			if(j == 0){
				printf("国語：");
				scanf("%d", &tensu[i][j]);
			}else{
				printf("数学：");
				scanf("%d", &tensu[i][j]);
			}
		}
	}
	printf("\n");

	printf("国語の合計:");
	for(int i = 0; i < 6; i++){
		sum += tensu[i][0];
	}
	printf("%d\n", sum);

	printf("国語の平均：");
	avg = sum / 6;
	printf("%lf\n", avg);

	//初期化
	sum = 0;
	avg = 0;

	printf("\n");

	printf("数学の合計:");
	for(int i = 0; i < 6; i++){
		sum += tensu[i][1];
	}
	printf("%d\n", sum);

	printf("数学の平均：");
	avg = sum / 6;
	printf("%lf\n", avg);

	sum = 0;
	avg = 0;

	for(int i = 0; i < 6; i++){
		printf("◆%d人目◆\n", i + 1);
		for(int j = 0; j < 2; j++){
			sum += tensu[i][j]; 
		}
		printf("合計点：%d\n", sum);
		avg = sum / 2;
		printf("平均点：%lf\n", avg);
		sum = 0;
		avg = 0;
	}

	return 0;
}