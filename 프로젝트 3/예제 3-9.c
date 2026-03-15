#include<stdio.h>

int main(void) {
	int a = 1000000;

	int res1 = a * a / a;
	int res2 = a / a * a;

	printf("%d * %d / %d = %d\n", a, a, a, res1);
	printf("%d / %d *%d = %d\n", a, a, a, res2);

	return 0;

}