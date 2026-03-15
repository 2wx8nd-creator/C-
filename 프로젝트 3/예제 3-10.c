#include<stdio.h>

int main(void) {
	char a = 'a'; //  char 는 문자형 : 따옴표를 안쓰면 숫자로 읽고 숫자에 맞는 아스키 문자를 출력함 ... 따옴표를 써야 문자가 그대로 저장됨.
	char d = 'd'; // char는 기본 한 글자만 저장가능 ... 문자열은 큰 따옴표 또는 배열 사용해야함
	char zero = '0'; // 큰 따옴표는 크기가 크다 (2byte)
	char two = '2';

	printf("'%c' - '%c' = %d\n", d, a, d - a); // %c는 문자타입 지시자
	printf("'%c' - '%c' = %d\n", two, zero, two - zero);
	printf("'%c' = %d\n", a, a); //아스키코드 a = 97
	printf("'%c' = %d\n", d, d); //아스키코드 d = 100
	printf("'%c' = %d\n", two, two); // 아스키코드 2=50
	printf("'%c' = %d\n", zero, zero); //아스키코드 0 = 48


	return 0;

}