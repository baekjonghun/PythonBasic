/*
�ۼ���:������
�ۼ���:2018-02-28
����:���� ������ 
*/
#include <stdio.h>

int main(void) {
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	nSelect = nInput <= 10 ? 10 : 20; // ���ǽ�? true:false

	nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
	return 0;
}