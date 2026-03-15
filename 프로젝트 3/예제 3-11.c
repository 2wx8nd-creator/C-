#include <stdio.h>

#define MIN 60 // 1시간 분 단위
#define HOUR MIN*60 // 1시간 초 단위

int main(void) {
	int dayInSec = 24 * HOUR; // 하루 초 단위 
	int numOfDay = 10; // 날짜 수
	int result = dayInSec * numOfDay; // 10일의 초 수

	printf("%d day = %d sec\n", numOfDay, result); // 10일 = x초


	return 0;

}