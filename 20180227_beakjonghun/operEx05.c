#include <stdio.h>

int main(void) {

	int n1 = 10; //010 8진수 , 0x10 16진수
	int n2 = -10;

	printf("%d\n", n1);
	printf("%010d\n", n1);// 00000000010 자리수를 채우도록 한다.
	printf("%-10d\n", n1);

	printf("%d \n", n1);
	printf("%d \n", n2);

	printf("%o,%x \n", n1, n1);
	printf("%#o , %#x \n", n1, n2);
	return 0;
}