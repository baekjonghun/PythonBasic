#include <stdio.h>
int main(void) {

	char cOperator = 0;
	int x = 0, y = 0, nResult = 0;

	scanf("%d %c %d", &x, &cOperator, &y);

	switch (cOperator) {
	case '+': 
		nResult = x + y;
		break;
	case '-':
		nResult = x - y;
		break;
	case '*':
		nResult = x * y;
		break;
	case '/':
		nResult = x / y;
		break;
	}

	printf("%d %c %d = %d", x, cOperator, nResult);


	return 0;
}