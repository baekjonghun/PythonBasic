/*
�ۼ���:2018-03-01
�ۼ���:������
-�� ��-
�ݿø��Ͽ� ����ϱ� double printf ���
*/
#include <stdio.h>
int main(void) {

	double dData = 123.456;
	printf("%f, %f\n", dData, -123.456);
	printf("%.1f\n",dData);
	printf("%.2f\n", dData);
	printf("%.3f\n", dData); //�ݿø� �ϰ� 3° �ڸ� ���� ���

	printf("%8d\n", 123);


	printf("%12.3f\n", 123); //�Ҽ��� ���� 12�ڸ� ���� ���, �Ҽ��� ����4�ڸ����� �ݿø�.
	printf("%012.3f\n", 123);
	//������ ��Ȯ�� �����ʹ� ���������� ���ϴ� ���� ����.
	return 0;
}
