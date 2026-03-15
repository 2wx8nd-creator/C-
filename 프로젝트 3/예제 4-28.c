#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int input;
	int answer;

	srand((unsigned)time(NULL));
	answer = rand() % 100 + 1; // 이 부분의 문법이 이해가 안됨 ... 어색한 거 같음
	printf("1~100의 정수를 맞춰라.\n");

	do {
		scanf_s("%d", &input);

		if (input > answer) {
			printf("down\n");
		}
		else if (input < answer) {
			printf("up\n");
		}
	} while (input != answer);

	printf("정답 : %d", answer);


}