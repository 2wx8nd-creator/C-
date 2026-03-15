#include<stdio.h>

int main(void) {
	double pi = 3.141592;
	double shortpi = (int)(pi * 1000)/1000.0; // int로 캐스팅 // 사칙연산의 서순에 의한 숫자 버림 ... 형변환과 서순으로 인해 값이 3.141592 가 아닌 3.141가 된다.
	

	printf("%lf\n", shortpi); // %f = 실수 타입 지시자 // long 은 왜 붙이지? ... %lf = double타입, %f =float타입 ... "항상 변수, 지시자, 호출의 타입을 맞추자."
	printf("%5.3lf\n", shortpi);

	return 0;

}