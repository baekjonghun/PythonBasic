#include <stdio.h>
int main(void) {
	int i, j = 0;

	for (i = 0; i < 5; ++i) {
		for (j = 0; j < 5; ++j) {
			putchar('*\t');
		}
		putchar('\n');
	}

	return 0;
}