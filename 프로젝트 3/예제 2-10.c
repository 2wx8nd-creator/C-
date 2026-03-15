#include <stdio.h>
#include <limits.h>

int main(void) {

	printf("short의 범위 : %d~%d\n", SHRT_MIN, SHRT_MAX);
	printf("int의 범위 : %d~%d\n", INT_MIN, INT_MAX);
	printf("long의 범위 : %d~%d\n", LONG_MIN, LONG_MAX);
	printf("long long의 범위 : %lld~%lld\n", LLONG_MIN, LLONG_MAX);
	
	printf("\n");
	
	printf("unsigned shrt : 0~%u\n", USHRT_MAX);
	printf("unsigned int : 0~%u\n", UINT_MAX);
	printf("unsigned long : 0~%u\n", ULONG_MAX);
	printf("unsigned llong : 0~%llu\n", ULLONG_MAX);


	return 0;
}