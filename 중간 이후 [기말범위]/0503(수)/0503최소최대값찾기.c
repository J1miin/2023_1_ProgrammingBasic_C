#include <stdio.h>
#define NUMBER_SIZE 10
//배열의 크기가 1000이면 다 디버깅하기 힘드니까, 작은 크기고 결정해서 확인하는 요령!
//이 때 기호상수로 해놓으면 디버깅할 때는 3으로 해놓고 확인하면 되는거지!

int main() {
	int Number[NUMBER_SIZE] = { 0 };

	for (int i = 0; i < NUMBER_SIZE; ++i) {
		int NumCnt;
		NumCnt = i + 1;
		printf("[%02d]번째 정수 입력 :",NumCnt);
		scanf_s("%d", &Number[i]);
	}
	printf("===입력된 값===\n");
	for (int i = 0; i < NUMBER_SIZE; ++i) {
		printf("[%d] \t", Number[i]);
	}
	printf("\n");
	int Max, Min;
	Max = 0;
	

	for (int i = 0; i < NUMBER_SIZE; ++i) {
		if (Number[i] > Max) {
			Max = Number[i];
		}

	}

	Min = Number[0];
	for (int i = 0; i < NUMBER_SIZE; ++i) {
		if (Number[i] < Min) {
			Min = Number[i];
		}
	}

	

	printf("입력된 값 중에서 최소값: [%d]\n", Min);
	printf("입력된 값 중에서 최대값: [%d]\n", Max);


	return 0;
}