#include <stdio.h>

int main(void) {
	int num =  10;
	int result = 0;

	//한번에 정수 2개 입력 
	//데이터 구분 : spacebar,  tab , enter
	printf("정수 두개 입력해주새요:");
	 scanf("%d %d",&num,&result); //"(%d %d)" 형식으로 입력을 받는다.  , %d\n   ->  34\n

	printf("result: %d , su:%d \n", num , result);

	getchar();



	return 0;
}