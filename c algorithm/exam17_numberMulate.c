/*
�ۼ���:2018-03-06
�ۼ���:������
����: ����� �Է� �����հ�
*/

#include <stdio.h>
int main(void) {
	int sumNum = 0;
	int userNum = 0;
	printf("NumberInput[Exit 0Input]");
	
	while (1) {
		scanf_s("%d", &userNum);
		sumNum += userNum;
		if (userNum == 0) {
			printf("���α׷��� ���� ���� �Ǿ����ϴ�.");
			printf("�հ�� %d�Դϴ�.", sumNum);
			goto EXIT;
		}
	}



	EXIT:return 0;
}