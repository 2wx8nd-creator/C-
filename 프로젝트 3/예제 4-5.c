#include <stdio.h>

int main(void) {
	int score = ' '; // 변수 초기화는 공백으로 하자.
	char grade = ' ';
	char opt = ' ';

	printf("점수를 입력하라.\n");
	scanf_s("%d", &score);
	printf("입력된 점수 : %d\n", score);

	if (score >= 90) {
		grade = 'A';
		if (score >= 98) {
			opt = '+';
		}
		else if (score >= 94) {
			opt = '0';
		}
		else { // else 는 조건식을 가지지 않음.
			opt = '-';
		}
	}
	else {
		grade = 'F';
	}

	printf("당신의 등급 : %c%c", grade, opt);

	return 0;

}
