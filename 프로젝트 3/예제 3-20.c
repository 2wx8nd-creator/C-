#include <stdio.h>
#include <string.h>

int main(void) {
	char str[] = "abc"; // 문자 배열 str에 abc를 저장

	printf("%d\n", "abc" == "abc");
	printf("%d\n", "str" == "abc");
	printf("%d\n", strcmp(str, "abc")); // printf() 안에 strcmp() ... 함수 안에 함수..?
	printf("%d\n", strcmp(str, "abb"));  // strcmp() : str과 "abb" 의 사전순서 비교
	printf("%d\n", strcmp(str, "abd"));

	return 0;

}