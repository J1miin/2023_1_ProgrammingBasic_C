//기본케이스 --> 입력값 변수 처리하기
//success!
#include <stdio.h>
int main(){
    int iResult;
    int iCol,iCol_1;
    int iRow,iRow_1;
    int iLine;
    //입력값 넣으려고 만드는 변수
    int input; //input=한 줄에 몇 개 넣을건지 받는다.
    int iDan; //몇 단 받을지 입력받는다.
    int iLineCnt;
    //input=2; //한줄에 2개 9단까지 출력하는 경우를 보자!
    //iDan=9; //일단 9단까지 받을 생각
    printf("한 줄에 몇개 출력하고 싶은지 입력하세요:");
    scanf("%d",&input);
    printf("몇 단까지 출력하고 싶은지 입력하세요:");
    scanf("%d",&iDan);
    //==반복해서 출력하기
    int border, borderCnt;
    
    iLineCnt=iDan%input;

    if (iLineCnt==0){ //총 몇 줄이 될지 계산하기 위해서! ex. 한 줄에 2개 출력시 생기는 줄은 총 5개, but 3개 출력시 생기는 줄은 3개 // 4개 출력시 3줄 생겨야하니까
        iLineCnt=iDan/input;
    }else{
        iLineCnt=iDan/input+1;
    }

    for (iLine=0;iLine<iLineCnt;++iLine){ //총 몇 줄로 나오게 하는지
        
        for (iRow=0; iRow<9;++iRow){ //@1x@2=@3에서 @2를 변하게 하는 부분
            iRow_1=iRow+1;

            for (iCol=0;iCol<input;++iCol){ //@1x@2=@3에서 @1을 변하게 하는 부분 -> +iCol을 함으로써 옆으로 하나씩 늘어나는 한 줄이 되는 것임!
                iCol_1=(input*iLine+1)+iCol;
                iResult=iCol_1*iRow_1;
                if (iCol_1>iDan){
                    break;
                    }
                printf("%d X %d = %2d\t",iCol_1,iRow_1,iResult);
                
            }
            printf("\n");
        }
        border=15*input;
        for(int i=0;i<border;++i){
            printf("=");
        }
        printf("\n");
        //printf("====================================\n");
    }
    
    

/*
    printf("1 x 1 = 1 \t");
    printf("2 x 1 = 2 \t");
    printf("3 x 1 = 3 \t");
    //1,2,3이 순서대로 하나씩 바뀐다. (변수로 두기)
*/
    return 0;
}