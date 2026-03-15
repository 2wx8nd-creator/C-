#include<stdio.h>

int main(void) {
	int a = 1000000;
	int b = 2000000;

	long long c = a * b; // a b c 셋 모두 정수타입.

	printf("c=%d\n", c);


	return 0;
}