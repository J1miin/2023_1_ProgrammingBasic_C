//9주차 과제 설명
//1번 실습 문제 : 배열에 채우는 숫자는 랜덤 함수 이용 -> 반복되지 않게!
//기존에 있는 좌표에 지금 있는 좌표가 겹치는 지 확인해야함. 
//x,y좌표 따로따로 비교해야함. x좌표를 기준으로 좌표를 정렬해야함. x좌표가 같으면 y좌표 비교해서 swap연산 해주면 됨.
//추가문제 : 입금게좌 비교할 때 탐색 알고리즘을 한 번 공부해길 추천 . 모르겠음 이메일 보내며 공부하십셩
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main(){
    int iRandomNum;
    srand(time(0));

    int iArr[SIZE]={0};
    int i,j, iInputNum, iInputNumIdx;
    
    int iCount =0;

    while (iCount<10){
        iRandomNum=(rand()%100)+1;
        for (i=0;i<iCount;++i){
            if(iArr[i]==iRandomNum){
                break;
            }
        }
        if (i==iCount){//겹치는 수가 없다는 뜻이다!
            iArr[iCount]=iRandomNum;
            iCount=iCount+1;
        }
    }

    for(j=0;j<SIZE; ++j){
        printf ("%d ",iArr[j]);
    }
    
    printf("\n상품번호를 입력하세요 : ");
    scanf("%d",&iInputNum);
    
    iInputNumIdx=iInputNum-1;//index처리
    printf("상품 %d번은 선반 %d에 있습니다.",iInputNum,iArr[iInputNumIdx]);


    return 0;
}