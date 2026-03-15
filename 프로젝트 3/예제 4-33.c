#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int num1, num2;
	int sum = 0;

	srand(time(NULL)); // srand() : ()안의 값이 난수표에서의 시작점 ... time() : UTC시간을 받아오는 함수, () 안의 값은 받아온 시간을 어디에 저장할지 지정한다 ... NULL : 저장하지 않음

roll_again:
	num1 = rand() % 6 + 1; // rand() : 난수 생성
	num2 = rand() % 6 + 1;

	printf("num1=%d, num2=%d \n", num1, num2);

	sum += num1 + num2;
	
	if (num1 == num2) { //두 주사위의 값이 같으면 ... 다시 굴리기
		goto roll_again;
	}

	printf("sum=%d\n", sum);

	return 0;
}