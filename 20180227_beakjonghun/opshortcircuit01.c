/*
�ۼ���:������
�ۼ���:2018-02-28
����:ShotSercit
���̰� 20�� �̻� 30�� �����̸鼭 ���ÿ� 150cm �̻��̸� �հ� 
*/

#include <stdio.h>
typedef enum { false, true } bool;

int main(void) {
	int age = 0;
	int nHeight = 0;
	bool flag = true;
	scanf_s("%d", &age);
	scanf_s("%d", &nHeight);

		 flag = (20 >= age && age <= 30 && nHeight >= 150); //��Ʈ ��Ŷ
	printf("�հ�:1 , ���հ�:0 ���:%d \n", flag);


	return 0;
}