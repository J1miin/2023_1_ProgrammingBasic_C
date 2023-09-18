//어느시점을 대상으로 프로그램을 짤지를 정해야한다. (내가 3개 뽑았고, 4번쨰거 뽑는 상황이야~)

#define TRUE 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 6

int main() {
	int iLotto[ARR_SIZE] = { 0 }; //{ 3, 14, 30 };//가정
	int iCount;
	int iRandNo;
	int i;
	iCount = 0; // 3; 가정할때

	srand(time(0));

	while (iCount<6) {
		iRandNo = (rand() % 45) + 1; //4번쨰 숫자임 

		for (i = 0; i < iCount; ++i) { //int i 하면 for 밖에서 쓸 수가 없음
			if (iLotto[i] == iRandNo) {
				printf("중복\n");
				break;
			}
		}

		if (i == iCount) {//중복 없이 3바퀴 다 돌아서 나온 것
			iLotto[iCount] = iRandNo;
			iCount = iCount + 1;
		}
		//for문 다 돌고 나온 아이(i=count값)와, break를 통해 나온 아이(i<count) 두 가지 경우가 있음.
		//중간에 나오면 다시 랜덤함수를 돌려야하고, 중복이 아니라면 배열에 넣어야함. 
		
	}
	for (int j = 0; j < ARR_SIZE; j++) {
		printf("%d,", iLotto[j]);
	}

	return 0;
}