/*
sample3.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 構造体 */
typedef struct SampleData {
	char test[10];
	int num;
	char beforedate[8];
	char afterdate[8];
} sdData;

void getArray(int *strNum, sdData *p);

int main(void)
{
	int number = 10;
	sdData smpData;

	getArray(&number, &smpData);

	printf("%s\n", smpData.test);
	printf("%d\n", smpData.num);
	printf("%s\n", smpData.beforedate);
	printf("%s\n", smpData.afterdate);
	
	return 0;
}


void getArray(int *strNum, sdData *p)
{
	strcpy(p->test, "112233445");
	p->num = *strNum;
	strcpy(p->beforedate, "201906");
	strcpy(p->afterdate, "201907");
}