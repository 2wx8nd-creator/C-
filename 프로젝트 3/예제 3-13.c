#include <stdio.h>

int main(void) {
	double pi = 3.141592;
	double s_pi = (int)(pi * 1000 + 0.5) / 1000.0; // 1. 괄호  2. 캐스팅  3. 나눗셈 ... 서순이 중요하다. 

	printf("%lf\n", s_pi); // 지시자와 변수를 double 타입으로 일치.

	return 0;

}