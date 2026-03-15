#include<stdio.h>

int main(void) {
	long long a = 1000000 * 1000000; // 1000000 * 1000000 = int * int : 결과값도 타입이 int인데 그 크기가 초과됨 : 오버플로우 ... 캐스팅 필요
	long long b = 1000000 * 1000000LL; // 캐스팅을 위해 접미사 사용 (접미사는 하나만 있어도 자동 캐스팅).

	printf("a=%lld\n", a);
	printf("b=%lld\n", b);


	return 0;
}