#include <stdio.h>

int main(void) {
	int i, j;

	i = 11;

	while (i--) {
		printf("%d\n", i);

		for (j = 0; j < 1000000000; j++) { // {;}을 1000000000번 실행하는데 걸리는 시간 : 약 0.5~2초
			;
		}
	}

	printf("END\n");
	
	return 0;

}