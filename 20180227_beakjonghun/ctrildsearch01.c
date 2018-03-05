#include <stdio.h>

int main(void) {
	int nInput = 0;

	scanf_s("%d", &nInput);
	if (nInput > 10) {
		int nInput = 20;
		printf("%d\n", nInput); 
	}

	if (nInput < 20) {
		int nInput = 30;
		printf("%d\n", nInput); 
	}

	printf("%d\n", nInput); 

	/*
	input 11 output 20 , 11
	*/
	return 0;
}