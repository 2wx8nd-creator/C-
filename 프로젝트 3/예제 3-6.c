#include<stdio.h>

int main(void) {
	int a = 10;
	int b = 4;

	printf("%d + %d = %d\n", a, b, a + b); // 정수의 연산 ... %d
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %f\n", a, b, a / b); // 지시자, 함수의 호출, 변수의 타입은 항상 맞춰줘야 한다.

	printf("%d / %f= %f\n", a, (float)b, a / (float)b); // 정수와 실수의 연산 ... %f // 정수 타입인 b를 실수 타입으로 캐스팅 // 연산 결과가 '실수 일 수도' 있으면 지시자도 캐스팅도 실수로

	return 0;

}