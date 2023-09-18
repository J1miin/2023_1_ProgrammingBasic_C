//별탑쌓기 0419 
#include <stdio.h>
int main(){
    int i,iInput, iLine, Star, BlankCnt;
    int iOneline;
    int StarCnt;
    int evenNum;
    
    while(1){
        printf("홀수를 입력해주세요:");
        scanf("%d",&iInput);
        
        evenNum=iInput%2;
        i = (iInput / 2)+1; 

        if (evenNum==0){
            printf("짝수는 입력할 수 없습니다.\n");
            continue;
        } else if (iInput<0){
            printf("음수는 입력할 수 없습니다 \n");
            continue; //반복문의 조건을 체크하러 다시 올라감 
            //break와 continue를 섞어쓰지 말 것 
        } else {
            for (iLine=0; iLine<i; ++iLine){
                iOneline=iLine+1;
                StarCnt=2*iLine+1;
                for (BlankCnt=i; BlankCnt>iOneline; --BlankCnt){
                    printf(" ");
                }
                for (Star=0;Star<StarCnt;++Star){
                    printf("*");
                }
                printf("\n");
            }
            break;
        }    
    }
    


    

}

/*
int iInputNo, iLoop, iLines, iStarCnt;

iInputNo = 5;
iLines = iInputNo / 2 +1;

for (iLoop=0;iLoop<iLines;++iLoop){
    iStarCnt=iLoop*2 +1;
    iBlankCnt=iLines-iLoop-1;

    for (int i=0 ;i<iBlankCnt; ++i){
        printf(" ");
    }

    for (int i=0; i<iStarCnt; ++1){
        //i변수가 의미가 없어서 따로 써준 것임 
        //i를 반복할 때만 쓰고 버리니까 여기서 정의하고 쓴 것임. 
        printf("*");
    }
}

*/