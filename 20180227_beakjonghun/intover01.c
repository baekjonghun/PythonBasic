#include <stdio.h>
/*
�ۼ���:2018-03-01
�ۼ���:������
-�� ��-
Ȱ�� : ��ȣ�� ���� ���� �� ��� 
*/
int main(void) {
	printf("%d\n", 10); //��ȣ�� �ִ� ������ 
	printf("%u\n", 10); //��ȣ�� ���� ������
	printf("%d\n", 10U);//unsigned int ��� 
	printf("%u\n", 10U); //unsigned int ��� 

	printf("%d\n", 2148483647);
	printf("%d\n", 2148483648); //������ �Ѿ��. -
	printf("%u\n", 2148483649); //��ȣ�� �����Ƿ� ���� ����� ���

	printf("%d\n", -1); //-1 
	printf("%u\n", -1); //2148483645

	return 0;
}