#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-02-28
����:else if ��
10 ���� ���ų� ������ 10  ũ�� 20
*/
int main(void) {
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	if (nInput <= 10) {
		nSelect = 10;
	}
	else {
		nSelect = 20;
	}
	return 0;
}