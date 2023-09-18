//구구단 일단 형태 맞춰놓기

#include <stdio.h>
int main(){
    int iCol, iStart, iRes, iLoop,iRow,i;

    for (i=0;i<3;++i){ //9단찍으라고 할 때 숫자 결정하기가 힘들 것임. 
        for (iLoop=0;iLoop<9;++iLoop){ //세로로 1부터 9까지의 곱 (2번째 곱의 값)
            iRow=iLoop+1;
            for (iCol=0;iCol<3;++iCol){ //3은 입력받는 걸로 처리 //이 for문부터 처리해야함.  //옆으로 3개 만드는 반복문
                iStart=i*3+iCol+1;
                iRes=iStart * iRow;
                printf("%2d x %2d = %2d \t", iStart,iRow, iRes);
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