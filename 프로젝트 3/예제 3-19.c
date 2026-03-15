#include<stdio.h>

int main(void) {
	unsigned int ui = 3;
	int i = 5;

	printf("%u\n", ui - i); // %u = unsigned 타입 지시자 
	printf("%d\n", ui - i);
	printf("%d\n", ui - i == -2);  // unsigned의 범위가 더 넓다 ... 음수 범위가 없어도 안정성을 위해 unsigned로 자동 캐스팅 ...
	printf("%d\n", ui - i == 4294967294); // 연산값이 -2 ... 언더플로우 ... 4294967294
	printf("%d\n", ui - i > 0);
	printf("%d\n", ui - i < 0);

	return 0;

}