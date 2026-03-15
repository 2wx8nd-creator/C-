#include <stdio.h>

int main(void) {
	int n;
	int m;
	int s;


	for (n = 0; n <= 9; n++) {
		printf("%d´Ü\t:\t", n);
		for(m=0; m<=9; m++){
			s = n * m;
			printf("%d\t", s);

		}
		
		printf("\n");
	
	}

	return 0;

}