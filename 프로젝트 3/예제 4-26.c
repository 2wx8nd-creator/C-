#include<stdio.h>

int main(void) {
	int sum = 0, i = 0;

	while ((sum += ++i) <= 100) { //  (sum += ++i) : sum = sum + 1 + i ... i의 값이 1씩 증가 ... sum의 값은 i 만큼 증가 
		printf("%d - %d\n", i, sum);
	}

	return 0;
}