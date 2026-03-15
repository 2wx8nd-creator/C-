#include<stdio.h>

int main(void) {
	int num; // 입력값
	int sum = 0; // 합계
	int flag = 1; // 반복정지 신호
	double mean = 0; // 평균값
	int x = 0; // 숫자를 입력한 횟수


	printf("합계할 정수를 모두 입력후 '0'을 입력하세요.\n");

	while (flag) {
		scanf_s("%d", &num);

		sum += num;
		flag = num;

		if (flag == 0 ) { // flag = 0 이라면 참
			printf("=\n%d\n", sum);

			mean = sum / x;

			printf("평균값 = %lf", mean);

		}
		else {
			flag = 1;
			printf("+\n");
			++x;
		}

	}

	return 0;
}