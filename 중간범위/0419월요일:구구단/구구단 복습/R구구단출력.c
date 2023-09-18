//3개 열로 9단까지 출력하는 기본 케이스까지 성공!0!
#include <stdio.h>
int main(){
    int iResult;
    int iCol,iCol_1;
    int iRow,iRow_1;
    int iLine;
    
    for (iLine=0;iLine<3;++iLine){ //총 3단으로 나오게 하는 부분
        
        for (iRow=0; iRow<9;++iRow){ //@1x@2=@3에서 @2를 변하게 하는 부분
            iRow_1=iRow+1;

            for (iCol=0;iCol<3;++iCol){ //@1x@2=@3에서 @1을 변하게 하는 부분 -> +iCol을 함으로써 옆으로 하나씩 늘어나는 한 줄이 되는 것임!
                iCol_1=(3*iLine+1)+iCol;
                iResult=iCol_1*iRow_1;
                printf("%d X %d = %2d\t",iCol_1,iRow_1,iResult);
            }
            printf("\n");
        }
        printf("====================================\n");
    }
    
    

/*
    printf("1 x 1 = 1 \t");
    printf("2 x 1 = 2 \t");
    printf("3 x 1 = 3 \t");
    //1,2,3이 순서대로 하나씩 바뀐다. (변수로 두기)
*/
    return 0;
}