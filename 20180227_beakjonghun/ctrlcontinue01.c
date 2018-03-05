#include <stdio.h>

int main(void) {
	int i = 0;

	for (i = 0; i < 10; ++i) {
		if (i > 4) {
			continue; //continue 를 만나는 순간 부모 반복문 이동 
		}
		printf("%dth \n",i);
	}
	printf("%dth \n",i); //10
	return 0;
}