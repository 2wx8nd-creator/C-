#include<stdio.h>

int main(void) {
	int i;
	int n;

	for (i = 0; i <= 10; i++) {
		for (n = 0; n <= i; n++) {
			printf("*");

		}
		printf("\n");
	
	}

	return 0;


}