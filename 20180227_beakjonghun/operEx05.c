#include <stdio.h>

int main(void) {

	int n1 = 10; //010 8���� , 0x10 16����
	int n2 = -10;

	printf("%d\n", n1);
	printf("%010d\n", n1);// 00000000010 �ڸ����� ä�쵵�� �Ѵ�.
	printf("%-10d\n", n1);

	printf("%d \n", n1);
	printf("%d \n", n2);

	printf("%o,%x \n", n1, n1);
	printf("%#o , %#x \n", n1, n2);
	return 0;
}