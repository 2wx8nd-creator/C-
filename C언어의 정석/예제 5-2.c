#include<stdio.h>

int main(void) {
	int i = 0;
	int arr[10] = { 0 };
	const int LEN = sizeof(arr) / sizeof(arr[0]); // 배열의 길이

	printf("%d\n", i);
	printf("%d\n", arr[0]);
	printf("배열의 길이 : %d\n", LEN);

	for (i = 0; i < LEN; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}