#include <stdio.h>

int main(void) {

	int num; 
	int abs;

	printf("�����Է�");
	scanf_s("%d", &num);

	if (num == 0) {
		printf("�����Դϴ�. \n");
	}
	else if (num > 0) {
		printf("����Դ�n.\n");
	}
	else {
		 printf("�����Դϴ�.");
		// abs = (num > 0) ? num : num*(-1);//���
	}

	/*
	if (num> 0) {
		abs = num; 

	}
	else {
		abs = num*(-1);
	}
	*/
	
	return 0;
}