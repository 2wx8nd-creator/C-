#include<stdio.h>

int main(void) {
	int a, b;
	
	for (a = 1; a <= 5; a++) {
		for (b = 1; a + b <= 5; b++) {
			printf("\t");
		
		
		}
		printf("[%d,%d]\n", a, b);
	
	}


	return 0;
}