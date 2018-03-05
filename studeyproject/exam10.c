#include <stdio.h>

int main(void) {
	int num = 2;

	switch (num) {
	case 1:
		printf("a");
		printf("b");
		printf("c");
	case 2:printf("d");
	case 3:printf("c");
	default:printf("defalut");
	}

	return 0;
}