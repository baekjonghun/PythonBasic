#include <stdio.h>

int main(void) {
	int num = 0;

	for(int j=1; j<=9; j++){
	  for (int i = 1; i <= j; i++) {
		if (j % 2 == 0 ) {
			printf("%d * %d = %d \n", j, i, (j*i));
		}
	  }

	printf("\n");
	}
	return 0;
}