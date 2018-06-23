#include <stdio.h>

int main(void)
{
	int min, max, num;
	double sum;

	printf("何cmから：");
	scanf("%d", &min);

	printf("何cmまで：");
	scanf("%d", &max);

	printf("何cmごと：");
	scanf("%d", &num);

	for(int i = min; i <= max; i += num){
		printf("%dcm  ", i);
		sum = (i - 100) * 0.9;
		printf("%.2fkg\n", sum);
	}
}