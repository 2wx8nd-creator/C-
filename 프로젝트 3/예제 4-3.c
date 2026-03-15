#include <stdio.h>

int main(void) {
	int input;

	printf("숫자를 입력하라.\n");
	scanf_s("%d", &input);

	if (input==0) {
		printf("입력 : 0\n");

	} else {
		printf("입력 : %d", input);

	}

	return 0;

}