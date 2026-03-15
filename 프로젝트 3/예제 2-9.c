#include<stdio.h>
#pragma warning(disable:4996) // 4996 : 보안취약 및 지원중단 주의

int main(void) {
	float f; // float : 실수 , 정수는 int
	double d; // double : 실수

	scanf_s("%f%lf", &f, &d); // 지시자는 타입에 맞춘다 : 실수-실수

	printf("입력된 실수 : %f\n", f); // %f %e %g : 실수 지시자
	printf("입력된 실수 : %f\n", d);

	return 0;

}