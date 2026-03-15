#include <stdio.h>

int main(void) {
	int month = ' ';

	printf("오늘은 몇 월입니까.\n");
	scanf_s("%d", &month);
	printf("입력된 월 : %d월\n", month);

	switch(month) {
		case 1:
		case 2:
		case 12:
			printf("%d월은 겨울입니다.", month);
			break;
		case 3:
		case 4:
		case 5:
			printf("%d월은 봄입니다.", month);
			break;
		case 6:
		case 7:
		case 8:
			printf("%d월은 여름입니다.", month);
			break;
		case 9:
		case 10:
		case 11:
			printf("%d월은 가을입니다.", month);
			break;
		default:
			printf("당신은 정말 지구에 살고계신가요?");
			break;
	}

	return 0;

}