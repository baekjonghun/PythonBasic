/*
�ۼ���:2018.03.05
�ۼ���:�� �� ��
���� : ������ ������
*/

#include <stdio.h>
int num = 3; //�������� data / heap / stack  ���α׷��� ���۵Ǹ� �������.

int main(void) {
	if (num == 1) {
		int num = 2;
		num++;
		printf("if �� �ȿ�����  num: %d \n", num);
	}
	else {
		num++;
		printf("else�� �ȿ����� num:%d \n", num);
	}
	printf("if �� �ۿ����� num : %d \n", num); 
	{
		int num = 100;
		num++;
		printf("�̸����� ���������� num: %d \n", num);
	}
	

	return 0;
}