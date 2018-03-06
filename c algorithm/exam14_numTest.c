#include <stdio.h>

int main(void) {


	for (int i = 1; i <= 3; i++)    
	{
		for (int j = 1; j <= 3; j++)    
		{
			if (j == i)               
				printf("1");          
			else                      
				printf("0");          
		}
		printf("\n");             
	}

	return 0;
}