#include <stdio.h>

int main(void) {
	int aList[5] = { 10,20,30,40,50 };
	int aListNew[5] = { 0 };
	int i = 0;

	//aListNew = aList; error

	for (int i = 0; i < 5; i++) {
		printf("%d\t", aListNew[i]);
	}
	putchar('\n');

	return 0;
}