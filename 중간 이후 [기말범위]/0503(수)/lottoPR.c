//로또 다시 연습
#define SIZE 6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int iLotto[SIZE] = { 0 };
	srand(time(0)); 
	int i = 0;
    int count = 0 ;
    int iRandomNum;

	while (count < SIZE) {
        iRandomNum=(rand()%45)+1;
        for (i=0; i < count ; ++i){
            if (iLotto[i]==iRandomNum){
                printf("중복\n");
                break; //for문 브레이크
            }
        }
        if (count == i){
            iLotto[i]=iRandomNum;
            count = count + 1;
        }
        //count랑 i가 다르면 카운트가 안올라가니까 while로 계속 반복 가능 
	}
	for (i = 0; i < SIZE; ++i) {
		printf("%d \n", iLotto[i]);
	}	
	return 0;
}
