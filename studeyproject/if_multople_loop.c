/*
��¥:2018-03-05
�̸�:������
����:��ø ���� ����������
*/

#include <stdio.h>
#include<stdbool.h>

int main() {

	int num1 = 0;
	bool exitOuterLoop = false;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num1 == 20) {
				//goto EXIT //���̺� EXIT �� ��� �̵�
				exitOuterLoop = true;
				break; //���� ������ �������´�.
			}
			num1++;
		}
		if (exitOuterLoop == true) {
			break;
		}

		//EXIT: 
		printf("%d\n", num1); //20
		return 0;
	}
}