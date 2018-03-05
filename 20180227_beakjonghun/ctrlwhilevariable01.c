#include <stdio.h>

int main(void) {
	char ch = 0;
	while((ch = getchar() != '\n')) {
		int nIndex = 0;
		printf("%02d\t%c\n", nIndex, ch);
		nIndex++;

   //int Index = 0; 반복문 내에서 변수선언 X 
	}

	return 0;
}