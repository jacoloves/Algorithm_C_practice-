	#include <stdio.h>

int main(void)
{
	int i, j, k, tmp;
	int tensu1[4][3];
	int tensu2[3][4];
	int sum[4][4];

	for(i = 0; i < 4;i++){
		for(j = 0; j < 3; j++){
			printf("tensu1[%d][%d]:", i, j);
			scanf("%d", &tensu1[i][j]);
		}
	}

	for(i = 0; i < 3;i++){
		for(j = 0; j < 4; j++){
			printf("tensu2[%d][%d]:", i, j);
			scanf("%d", &tensu2[i][j]);
		}
	}

	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			tmp = 0;
			for(k = 0; k < 3; k++){
				tmp += tensu1[j][k] * tensu2[k][j];
			}
			sum[i][j] = tmp;
		}

	}


	puts("合計点");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%4d", sum[i][j]);
		}
		putchar('\n');
	}

	return 0;


}