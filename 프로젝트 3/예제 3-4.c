#include<stdio.h>

int main(void) {
	int i = 5;
	int j = 0;

	j = i++; // j = 5 + 1
	printf("j=i++; 실행 후, i=%d, j=%d\n", i, j);

	i = 5;
	j = 0;

	j = ++i; // "j = 1 + i" 가 아닌, "j = 1, j = 5" 이다.
	printf("j=++i 실행 후, i=%d, j=%d", i, j);


	return 0;

}