#include <stdio.h>
/*
while
*/
int main(void) {

	char ch = 0;

	while ((ch = getchar()) != '\n') { //getchar()버퍼 문자 입력 
		putchar(ch); //문자 출력 
	}

	return 0;
}