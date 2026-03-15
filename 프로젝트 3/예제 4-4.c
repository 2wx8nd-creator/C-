#include <stdio.h>

int main(void) {

	int score = 0;
	char grade= 0;

	printf("점수를 입력하라.\n");
	scanf_s("%d", &score);

	if (score >= 90) { grade = 'A'; }
	else if (score >= 80) { grade = 'B'; }
	else if (score >= 70) { grade = 'C'; }
	else { grade = 'D'; }

	printf("당신의 등급 : %c", (char)grade);

	return 0;

}