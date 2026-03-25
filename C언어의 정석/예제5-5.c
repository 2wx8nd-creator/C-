#include<stdio.h>
#include<string.h>

int main(void) {
	int arr1[4] = { 2,3,5,7 };
	int arr2[sizeof(arr1) / sizeof(arr1[0])] = { 0, };

	const int LEN = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	int chk = 0;
	

	memcpy(arr1, arr2, sizeof(arr1));
	
	arr2[0] = 100;
	
	for (i = 0; i < LEN; i++) {
		printf("arr1[%d] = %d \t arr2[%d] = %d\n", i, arr1[i], i, arr2[i]);
	}
	
	chk = memcmp(arr1, arr2, sizeof(arr1));

	if (chk == 0) {
		printf("\n불일치\n");

	}
	else {
		printf("\n불일치\n");
	};

	return 0;

}