#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]);

int main(void)
{
	int tensu1[4][3] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };
	int tensu2[3][4] = { {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1} };
	int sum[3][3];

	mat_mul(tensu1, tensu2, sum);

	return 0;
}

void mat_mul(const int a[4][3], const int b[3][4], int c[3][3])
{
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			int sum = 0;
			for(int k = 0; k < 4; k++){
				sum += b[j][k] * a[k][j];
			}
			c[i][j] = sum;
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}