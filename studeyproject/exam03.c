#include <stdio.h>
double function(int n); 

//�Լ� ���� 


int main(void) {

	printf("��ȯ��: %f", function(7.25));



	return 0;
}


double function(double n) {

	printf("�Էµ� ���� : %f", n);
	return 0.25;
}

//int�� double�Լ�ȣ�� -> result : �Էµ� ���� 7 , ��ȯ��: 0 data �ս� 