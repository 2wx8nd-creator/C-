#include<stdio.h>

int main(void) {
	int i = 5;

	while (i--) { // i 값으로 진위 판단 ... 증감연산 실행 ... 블록 실행 ... 다시 처음부터
		printf("%d\n", i);
	}

	return 0;
}