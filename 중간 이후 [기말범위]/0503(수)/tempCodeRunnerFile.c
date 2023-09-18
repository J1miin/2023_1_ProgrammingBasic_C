#define SIZE 6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int iLotto[SIZE] = { 0 };
	srand(time(0)); 
	int i = 0;
    int count =0 ;
    int iRandomNum;

	while (TRUE) {
        iRandomNum=(rand()%45)+1;
        for (i=0; i<count ; ++i){
            if (iLotto[i]==iRandomNum){
                printf("중복\n");
                break;
            }
        }
        if (count == i){
            iLotto[i]=iRandomNum;
            count = count + 1;
        }
	}
	
	for (int i = 0; i < 6; ++i) {
		printf("%d \n", iRandomNo[i]);
	}
	
	
	return 0;
}
