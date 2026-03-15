#include<stdio.h>

int main(void) {
	int arr[5] = { 10,20,30,40,50 };
	int arr2[6] = { 0 };
	int arr3[6];

	int i = 0;

	for (i = 0; i < 6; i++) {
		arr3[i] = i + 1000;
	}


	for (i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}


	for (i = 0; i < 5; i++) {
		printf("%d\n", arr2[i]);
	}
	

	for (i = 0; i < 5; i++) {
		printf("%d\n", arr3[i]);
	}
	return 0;
}