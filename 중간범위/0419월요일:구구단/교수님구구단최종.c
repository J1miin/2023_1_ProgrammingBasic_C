//구구단 
#include <stdio.h>
int main(){
    int iCol, iStart, iRes, iLoop;
    int iRow,i;
    int iWidth, iTotalDan, iTotalLine;
    printf("한줄에 출력할 단 수를 입력하세요 : ");
    scanf("%d",&iWidth);
    printf("총 출력단 : ");
    scanf("%d",&iTotalDan);
     //iWidth=2가 되는 순간 i<3의 3도 바뀌어야하고, iStart도 바뀌어야함. 

    iTotalLine= iTotalDan/iWidth +1; //+1하면 안되나?
    // iTotalDan이 나머지가 잇으면 한 줄 더 찍으면 됨.
    for (i=0;i<iTotalLine;++i){ //9단찍으라고 할 때 숫자 결정하기가 힘들 것임. 
        for (iLoop=0;iLoop<9;++iLoop){ //세로로 1부터 9까지의 곱 (2번째 곱의 값)
            iRow=iLoop+1;
            for (iCol=0;iCol<iWidth;++iCol){ //3은 입력받는 걸로 처리 //이 for문부터 처리해야함.  //옆으로 3개 만드는 반복문
                iStart=i*iWidth+iCol+1; //i*3의 숫자3도 바뀌어야함. 3을 iwidth로 바꿔줌
                iRes=iStart * iRow;
                printf("%2d x %2d = %2d \t", iStart,iRow, iRes);
                if (iStart>iTotalDan){
                    break;
                }
            }
        printf("\n");
    }
    printf("============================================\n");

    }
    
    
    //printf("1 x 1 = 1 \t"); //1,2,3이 변하는 걸 보고 for문을 쓴다.
    // printf("2 x 1 = 2 \t");
    //printf("3 x 1 = 3 \t");
    return 0;
}

//for문은 내가 반복하는 횟수를 내가 쓰면 안됨. 
//for문장에서 iRow같은 조건에 들어가는 건, left항 변수로 들어갈 수 없음