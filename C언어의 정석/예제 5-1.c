#include<stdio.h>

int main(void) {
	int score[3];
	int i, tmp;
	int k = 1;

	score[0] = 50;
	score[k] = 40;
	score[k + 1] = 90;

	tmp = score[1] + score[k];

	for (i = 0; i <= 3; i++) { // score[3] : 범위를 벗어나는 인덱스 ... 범위를 벗어나는 것은 치명적이니 주의.
		printf("score[%d] : %d\n", i, score[i]);
	}

	printf("%d\n", tmp);

	return 0;

}