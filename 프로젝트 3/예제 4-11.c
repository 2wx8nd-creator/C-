#include <stdio.h>

int main(void) {
	char op = ' ';
	int x = 0;
	int y = 0;
	double result = 0;

	scanf_s("%d %c %d", &x, &op, 1, &y); // 입력이 저장공간에 넘칠 위험이 있는 타입 ... 변수 호출 시에 변수의 크기를 명시해야함. ... (호출, 숫자)의 형태로 명시
	
	switch(op) {
		case '+' :
			result = x + y;
			break;

		case '-' :
			result = x - y;
			break;

		case '*' :
			result = x * y;
			break;

		case '/' :
			if (y == 0) {
				result = '?';
			}
			else {
				result = x / (double)y;
			}
			break;
		default :
			result = '?';
			break;
	}

	if (result == '?') {
		printf("결과 = ?");
	}
	else{
		printf("결과 = %lf", (double)result);
	}

	return 0;
}