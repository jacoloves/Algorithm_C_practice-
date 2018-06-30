#include <stdio.h>

int min_of(const int v[], int n)
{
	int min = v[0];

	for(int i = 1; i < n; i++){
		if(min > v[i]){
			min = v[i];
		}
	}

	return min;
}

int main(void)
{
	int ary1[] = {1, 2, 3, 4, 5};

	printf("要素ary1の最小値は%dです。\n", min_of(ary1, 5));

	return 0;
}