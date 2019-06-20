#include <stdio.h>
#include <stdlib.h>

int testsample(int *a);

int main(void)
{
	int initNum;
	int *test;
	
	initNum = testsample(&test);
	
	printf("%d\n", test);
	
	return initNum;
}

int testsample(int *a)
{
	
	*a = 3;

	return 0;
}