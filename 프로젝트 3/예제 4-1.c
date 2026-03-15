#include <stdio.h>

int main(void) {
	int x = 0;
	printf("x=%d\n", x);

	if (x == 0) printf("x==0\n"); // ;까지가 블록 ... 블록이 복수라면 ... 중괄호 사용
	if (x != 0) printf("x!=0\n");
	if (x)		printf("x\n");
	if (!x)		printf("!x\n");

	x = 1;
	printf("\nx=%d\n", x);

	if (x == 0) printf("x==0\n");
	if (x != 0) printf("x!=0\n");
	if (x)		printf("x\n");
	if (!x)		printf("!x\n");

	return 0;

}