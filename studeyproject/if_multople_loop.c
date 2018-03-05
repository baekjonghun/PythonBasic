/*
날짜:2018-03-05
이름:백종훈
제목:중첩 루프 빠져나오기
*/

#include <stdio.h>
#include<stdbool.h>

int main() {

	int num1 = 0;
	bool exitOuterLoop = false;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num1 == 20) {
				//goto EXIT //레이블 EXIT 로 즉시 이동
				exitOuterLoop = true;
				break; //안쪽 루프만 빠져나온다.
			}
			num1++;
		}
		if (exitOuterLoop == true) {
			break;
		}

		//EXIT: 
		printf("%d\n", num1); //20
		return 0;
	}
}