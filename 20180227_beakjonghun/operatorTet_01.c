/*
Day::::2018. 02 27 
�ۼ���:JongHunBeak
*/

#include <stdio.h>

int main(void) {

	//���� 1. 
	printf("Programmng! It's fun \n");


	//����2.

	printf("%10s  %s  %s \n %9s  %5d  %5d \n  %8s  %5d  %5d \n","item","count","price","pen",5,1000,"note",25,950);

	//���� 3.
		printf("\"�� �ڽ��� �˶� \" ��� ��ũ�� �׽��� ���ߴ�.\n  ����70%% ����Ǿ���. \n c:\\temp ������ �����Ѵ�. \n");

     //����4
		int val;
	
		val = 1 + 2; /* ~~~   */
		printf("1+2=%d \n", val);
	
		val = 2 + 3;
		printf("2+3=%d", val);
	



//����5.

		int val1 = 0;
		int val2 = 0;
		printf("������ �����ؼ� 2�� �Է��Ͻÿ�.:10 3 \n");
		scanf("%d", val1);
		scanf("%d", val2);
		printf("�Է¹��� ��1:%d ��2:%d \n", val1, val2);
		int sum = val1 + val2;
		float avage = sum / 2;

		return 0;
}
