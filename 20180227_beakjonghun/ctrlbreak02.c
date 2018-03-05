#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	for (i = 0; i < 5; ++i) {
		printf("i == %d\n", i);

		for (j = 0; j < 5; ++j) {
			if (j > 2) {
				break; //바깥쪽 for문은 계속 수행
			}
			printf("\t%dth\n",j);
		}
		printf("end\n\n", i);
	}
	return 0;
}