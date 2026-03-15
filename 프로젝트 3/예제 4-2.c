#include <stdio.h>

int main(void) {

	int input;

	printf("숫자를 입력해라.\n");
	scanf_s("%d", &input);

	if (input != 0) {
		printf("입력 = %d\n", input);
	}

	if (input == 0) {
		printf("입력 = 0");
	}

	return 0;

}