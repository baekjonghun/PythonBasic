#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

	int num1, num2 = 0;
	int result = 0;
	int count = 0;
	printf("��ȣ�� �Է��Ͻÿ�. 1 +  ,2 - , 3 * , 4 / ");
	scanf_s("%d", &count);
	printf("���� �ΰ� �� �Է��Ͻÿ�.");
	scanf_s("%d %d", &num1, &num2);
	if(count == 1){
	result= 	num1 + num2;

	}else if (count == 2) {
		result = num1 - num2;

	}else if (count == 3) {
		result = num1 * num2;

	}else if (count == 4) {
		result = num1 / num2;

	}

	printf("result %d" , result);

	return 0;
}
