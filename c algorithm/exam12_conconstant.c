#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-03-06
�� ��:�Ҽ� ���ϱ�
*/
int main(void) {
	int result = 0;
	int num = 0;
	int i = 0;
	printf("2�� 3�� ����� �ƴ� 100������ �ڿ����� \n");

	for (i = 1; i <= 100; i++) {
		if (i % 2 != 0 && i % 3 != 0) {
			printf("%d ", i);
		}
	}

	printf("2��3�� ����� �ƴ� 100 ������ �ڿ��� ����:%d \n",result);



	return 0;
}