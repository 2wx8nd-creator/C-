#include <stdio.h>

int main(void) {
	int num;
	int sum = 0;

	printf("정수를 입력하라.\n");
	scanf_s("%d", &num);

	while (num) { // 반복 
		sum += num % 10; // 모듈로 값(%10) 저장
		printf("num=%d\n", num);

		num /= 10; // 10으로 나누고 소숫점 버리기
	}

	printf("각 자리수의 합 : %d\n", sum);

	return 0;
}