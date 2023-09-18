#define TRUE 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//w중복없이 나와야 함 -> 비교 해야하는데, 비교 횟수가 얼마인지 모름 -> while
//1-45 정수를 난수로 발행  -> 난수 6개를 중복없이 저장하기
//이미 찾은 값이 있어야 중복없이 저장할 수 있음.
//이미 찾은 값이 있는 걸 가정하고 시작 해야함.
//ex. 1,2,3,4,? <- ?를 찾는 과정이라 생각해야함. 
int main() {
	int iRandomNo[6] = { 0 };
	srand(time(0)); 
	int i = 0;
	while (TRUE) {
		iRandomNo[i]= (rand() % 45) + 1; //0번쨰에 1이 1번 칸에 2가 저장되어 있다고 생각하자 
		for (int j = 0; j < i; ++j) {
			if (iRandomNo[j] == iRandomNo[i]) {
				iRandomNo[i]= (rand() % 45) + 1;
				//이러면 이랜덤이랑 또 같게 되는 경우 오류가 ㄷ생기니까 암됨
			}
		}
		i++;
		if (i == 6) {
			break;
		}
	}
	
	for (int i = 0; i < 6; ++i) {
		printf("%d \n", iRandomNo[i]);
	}
	
	
	return 0;
}

/*
	if (iRandomNo[0] == iRandomNo[1]) {
		iRandomNo[1] = (rand() % 45) + 1;
	}
	if (iRandomNo[0] == iRandom[2] || iRandomNo[1] == iRandom[2]) {
		iRandomNo[2] = (rand() % 45) + 1;
	}
	if (iRandomNo[0] == iRandom[3] || iRandomNo[1] == iRandom[3]||) {
		iRandomNo[2] = (rand() % 45) + 1;
	}
	3번 애는 자기 전까지 비교를 해야함. 이걸 for문으로 비교하까?
*/