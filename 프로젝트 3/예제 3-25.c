#include<stdio.h>
#define LEN 32

void printToBinary(int dec) { // printf() : 8, 10 ,16 ... 2진수는 불가 ... printToBinary()
	char bin[LEN] = {0}; // bin : 배열의 이름 ... [] : 배열의 크기 선언 ... [LEN] : LEN개 의 요소 선언 ... {0} : 요소를 0으로 채움
	int pos = LEN;
	int i;

	do { // do{}while() 반복문

		bin[--pos] = (dec & 1); // --pos : 32-1 ... 요소의 개수 = dec의 허실에 따라 0 또는 1
		dec = dec >> 1; // >> : 비트 논리 연산자 ...
		dec = dec & 0x7fffffff; // 0x7fffffff : NZ ... dec의 허실에 따라 0 또는 1

	} while (dec != 0);

	for (i = 0; i < LEN; i++) { // for() 반복문 ... for(초기식, 조건식, 증감식) ... 어디부터, 언제까지, 얼마만큼
		printf("%d", bin[i]);
	}
	printf("\n");

}

int main(void) {
	unsigned x = 0xAB; // 16진수 AB
	unsigned y = 0xF; // 16진수 F

	printf("%#X\t\t", x); printToBinary(x); // printToBinary() 호출 ... 매개변수 : x
	printf("%#X\t\t", y); printToBinary(y);

	printf("%#X\t\t", x | y); printToBinary(x | y);
	printf("%#X\t\t", x & y); printToBinary(x & y);
	printf("%#X\t\t", x ^ y); printToBinary(x ^ y);
	printf("%#X\t\t", x ^ y); printToBinary(x ^ y ^ y); // 논리 연산자(&&, ||, ! 등)은 중첩가능 ... 비교 연산자(등호, 부정등호, 부등호)는 불가능

	return 0;

}