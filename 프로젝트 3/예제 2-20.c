#include<stdio.h>

int main(void) {

	double d = 85.4;
	int score = (int)d; // 실점수는 실수, 표기점수는 정수로 변환하여 출력

	printf("점수=%d\n", score);//정수로 변환된 실수를 출력 
	printf("d=%f\n", d); //실점수를 출력 : 캐스팅은 복사하여 변환하는 것이기에 원래 값은 보존된다.

	return 0;

}