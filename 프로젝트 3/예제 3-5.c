#include<stdio.h>

int main(void) {
	int i = 5, j = 5; // 둘 다 5 로 선언

	printf("i=%d\n", i++); // 후위형
	printf("j=%d\n", ++j); // 전위형
	printf("i=%d, j=%d\n", i, j); // 함수의 호출에서 증감 연산자를 사용한 후 두 리터럴의 변화


	return 0;

}