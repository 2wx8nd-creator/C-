#include <stdio.h>

int main(void) {
	float f = 9.1234567;
	double d = 9.1234567;
	double d2 = (double)f; // f의 리터럴을 double로 캐스팅

	printf("f = %20.18f\n", f); // %f = 실수형 지시자
	printf("d = %20.18f\n", d);
	printf("d2 = %20.18f\n", d2);

	return 0;

}// 결론 : 실수형 간(float, double)의 캐스팅도 정수형과 마찬가지로 원활하다. 