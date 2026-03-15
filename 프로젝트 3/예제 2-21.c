#include <stdio.h>

int main(void) {

	int i;
	char ch;
	short s;
	unsigned short us;

	i = 10;
	ch = (int)i; // 문자형으로 바꿔야하는 거 아니야..? // 문자형으로 안바꾸니까 숫자가 출력되네, 캐스팅과 지시자를 모두 문자형으로 해야 문자가 출력됨
	printf("i=%d ... ch=%c\n", i, ch);
	

	i = 300;
	ch = (int)i; // 얘도 이상한 거 아닌가? char 에 맞춰서 캐스팅 해야지 않아??
	printf("i=%d ... ch=%d\n", i, ch);


	ch = 10; // 아스키 10은 \n
	i = (int)ch;
	printf("i=%d ... ch=%c\n", i, ch);

	ch = -2; // char는 문자형이지만 정수도 읽을 줄 안다.
	i = (int)ch;
	printf("i=%d ... ch=%d\n", i, ch);

	s = 32767;
	us = (unsigned short)s;
	printf("s=%d ... us=%u\n", s, us); // %u : unsigned 타입 지시자


	us = 32767;
	s = (short)us;
	printf("us=%u ... s=%u\n", us, s); // 왜 s를 출력할 때 %d가 아니라 %u를 사용하는 거지?
									   // 이 코드에서는 우연히 부호를 붙여도 둘 다 양수이다.

	s = -1;
	us = (unsigned short)s;
	printf("s=%d ... us=%u\n", s, us);

	us = 65535;
	s = (short)us;
	printf("us=%u ... s=%d\n", us, s);

	printf("s=%hx\n", s);
	printf("us = %hx\n", us); // %x = 16진 정수로 출력, %o = 8진 정수로 출력, %hx= byte 절반만 읽어라. + %lx = byte를 늘려 읽어라
	
	return 0;


}