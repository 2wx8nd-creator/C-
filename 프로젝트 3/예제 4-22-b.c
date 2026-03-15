#include<stdio.h>

int main(void) {
	int a = 0;
	int b = 0;

	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= a; b++) {
			printf("[%d,%d]\t", a, b);
	
		}
		printf("\n");
	
	}



	return 0;
}