#include <stdio.h>

int main(void) {

	int num1 = 5; 
	int num2 = 2;

	int result = 0;
	num1 = num1 + num2;
	num1 =+ num2;
	
	result = num1 + num2;//sum
		printf("%d \n", result);

		result = num1 - num2;//min
		printf("%d \n", result);

		result = num1 * num2;//mul
		printf("%d \n", result);

		result = num1 / num2;//
		printf("%d \n", result);

		result = num1 % num2;//
		printf("%d \n", result);


		//���� ���� ������ (1�� �����Ѵ�.)

		int num1 = 1;
		num1++;

		printf("%d\n", num1);	//���� ������

		int num2 = 2; 
		++num2;
		printf("%d\n", num2); //���� ������

		char c1 = 'b';
		char c2 = 'b';
		c1++;
		c2--;
		printf("%c %c \n,", c1, c2);


      	return 0;
}