#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-03-06
�� ��:�Ҽ� ���ϱ�
*/
//100 ������ �ڿ����� 2�ǹ���� 3�ǹ���� �ƴ� �ڿ����� ���� �� ��� 

int main(void) {
	
	/*
	for (int i = 1; i <= 100; ++i) {

		if (i%2 != 0 && i%3!=0) {
			printf("%d ,", i);
		}
	}
	 */

	int j = 0;
	while (j < 100) {
		j++;
		if (j % 2 != 0 && j % 3 != 0) {
			printf("%d ,", j);
		}
		else { continue; }
	}

	return 0;
}