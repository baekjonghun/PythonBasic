#include <stdio.h>

int main(void) {
	int num =  10;
	int result = 0;

	//�ѹ��� ���� 2�� �Է� 
	//������ ���� : spacebar,  tab , enter
	printf("���� �ΰ� �Է����ֻ���:");
	 scanf("%d %d",&num,&result); //"(%d %d)" �������� �Է��� �޴´�.  , %d\n   ->  34\n

	printf("result: %d , su:%d \n", num , result);

	getchar();



	return 0;
}