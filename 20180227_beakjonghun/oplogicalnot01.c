/*
�ۼ���:������
�ۼ���:2018-02-28
����:Not ������ 
*/

#include <stdio.h>

int main(void) {
	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	
	bResult = !nInput;
	printf("Result: %d ( 1:true , 0:false)\n", bResult);
	return 0;
}