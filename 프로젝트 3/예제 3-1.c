#include<stdio.h>

int main(void) {
	int i; // int 타입의 변수 i 가 있음을 선언.

	size_t i_size = sizeof(i); // 타입 size_t 를 통해 "변수 i_size", "i_size = sizeof(i) 임"을 선언.
	size_t int_size = sizeof(int); // int로 선언해도 괜찮지만 size_t가 안전하다.

	printf("i_size=%d\n", i_size);
	printf("int_size=%d\n", int_size);

	printf("sizeof(1.0f)=%d\n", sizeof(1.0f)); // f : float로써 읽으라는 뜻 : float = 4byte
	printf("sizeof(1.0)=%d\n", sizeof(1.0)); // 1.0의 크기가 아닌 자리의 크기, 즉 double의 크기 8byte
	printf("sizeof(65)=%d\n", sizeof(65)); // 얘는 정수라서 int의 크기인 4byte
	printf("sizeof('A')=%d\n", sizeof('A'));// 문자지만 정수로 읽어서 4byte (char=문자형, 정수형)
	printf("sizeof(char)=%d\n", sizeof(char));

	return 0;

}