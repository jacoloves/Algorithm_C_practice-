#include <stdio.h>

void mad_add(const int a[4][3], const int b[4][3], int c[2][4][3]);

void mat_printf(const int m[2][4][3]);

int main(void)
{
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {9, 6, 7}, {6, 7, 4}, {8, 3, 5}, {3, 5, 3} };
	int sum[2][4][3];

	mad_add(tensu1, tensu2, sum);

	mat_printf(sum);

	return 0;
}

void mad_add(const int a[4][3], const int b[4][3], int c[2][4][3])
{
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			for(int k = 0; k < 3; k++){
				if(i == 0){
					c[0][j][k] = a[j][k];
				}else if(i == 1){
					c[1][j][k] = b[j][k];
				}
			}
		}
	}
}

void mat_printf(const int m[2][4][3])
{
	for(int i = 0; i < 2; i++){
		printf("%d回目\n", i + 1);
		for(int j = 0; j < 4; j++){
			for(int k = 0; k < 3; k++){
				printf("%d ", m[i][j][k]);
			}
			printf("\n");
		}
	}
}