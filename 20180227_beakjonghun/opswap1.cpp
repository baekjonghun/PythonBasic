#include <stdio.h>
/*
while
*/
int main(void) {

	char ch = 0;

	while ((ch = getchar()) != '\n') { //getchar()���� ���� �Է� 
		putchar(ch); //���� ��� 
	}

	return 0;
}