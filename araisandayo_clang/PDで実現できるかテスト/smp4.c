/*
�T���v���e�X�g(���I�������m��)
*/

#include <stdio.h>
#include <stdlib.h>
#include "stTestData.h"


/* �v���g�^�C�v�錾 */
int ArrayPlus(sttest_data *p, int *num);

/* ���C���֐� */
int main(void)
{
	int area_number = 10;
	int Exe_Flag;
	sttest_data *p_pstData;
	
	Exe_Flag = ArrayPlus(p_pstData, &area_number);
	
	return Exe_Flag;
}

/* �z��̈�g���֐� */
int ArrayPlus(sttest_data *p, int *num)
{
	/* �������m�� */
	p = (sttest_data *)malloc(sizeof(sttest_data)*num);
	if (p == NULL) {
		printf(ArrayFail");
	}
	
	return 0;
}