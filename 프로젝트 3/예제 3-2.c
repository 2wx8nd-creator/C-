#include<stdio.h>

int main(void) {
	int i, i2;
	short s;


	i = -10;
	i = +i;
	printf("i=%d\n", i);

	i2 = -10;
	i2 = -i2;
	printf("i2=%d\n", i2);

	s = 10;
	printf("s=%d, sizeof(s)=%d\n", s, sizeof(s)); // s의 타입은 short니까 sizeof(s)=2byte,
	printf("+s=%d, sizeof(+s)=%d\n", +s, sizeof(+s));

	return 0;

}