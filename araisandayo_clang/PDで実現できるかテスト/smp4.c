/*
�T���v���e�X�g(���I�������m��)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stTestData.h"


/* �v���g�^�C�v�錾 */
int ArrayPlus(sttest_data **p, int *num);

/* ���C���֐� */
int main(void)
{
	int area_number = 10;
	int Exe_Flag;
	sttest_data *p_pstData;
	
	Exe_Flag = ArrayPlus(&p_pstData, &area_number);

	/*
	for (int i = 0; i < area_number; i++) {
		p_pstData[i].Number_Test = i;
	}
	
	for (int i = 0; i < area_number; i++) {
		printf("%d\n", p_pstData[i].Number_Test);
	}
	*/

	for (int i = 0; i < area_number; i++) {
		strcpy(p_pstData[i].sttest_data2.Busyo, "Employee");
	}

	for (int i = 0; i < area_number; i++) {
		printf("%s\n", p_pstData[i].sttest_data2.Busyo);
	}

	return Exe_Flag;
}

/* �z��̈�g���֐� */
int ArrayPlus(sttest_data **p, int *num)
{
	/* �������m�� */
	int a = *num;
	*p = (sttest_data *)malloc(sizeof(sttest_data) * a);
	if (p == NULL) {
		printf("ArrayFail");
		return 1;
	}
	
	return 0;
}