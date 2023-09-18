#include <stdio.h>
#define SIZE 9
int main(){
    int iArr[SIZE]={3,8,2,5,2,3,1,6,0};
    int iCnt[SIZE]={0};
    int iIndex;

    //3 --> Cnt2번 인덱스 1증가
    //iIndex = iArr[0]-1;
    //iCnt[iArr[0]-1]=iCnt[iArr[0]-1]+1;

    for (int i=0; i<SIZE; ++i){
        if (iArr[i]==0){
            continue;
        }
        iIndex = iArr[i]-1;
        iCnt[iIndex]=iCnt[iIndex]+1;
    }

    for (int i=0; i<9; ++i){
        if (iCnt[i]==0){
            printf("빠진 수는 %d입니다.",i+1);
        }
        //printf("[%d]",iCnt[i]); cnt 배열의 상태 출력해주는 명령문

    }
    printf("\n");
    
    return 0;

}