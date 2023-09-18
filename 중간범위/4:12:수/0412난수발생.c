#define TRUE 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int iRandomNo ;
    srand(time(0));
    iRandomNo= (rand() % 100)+1;
    
    int iStart, iEnd;
    iStart=1;
    iEnd=100;

    int iInput;

    
    while(TRUE){
        printf("%d~%d숫자를 입력하세요:",iStart,iEnd);
        scanf("%d", &iInput); 

        if (iInput==iRandomNo){
            printf("컴퓨터가 만든 수는 %d 입니다 \n", iInput);
            break;

        }else if (iInput>iRandomNo){ //50입력했다면
            iEnd=iInput-1;
            //printf("1~49 숫자를 입력하세요", iInput-1);
            // scanf("%d", &iInput);
        }else {
            iStart=iInput+1;
            //printf("51~100 숫자를 입력하세요", iInput-1);
            // scanf("%d", &iInput);
        }
    } 

    printf("Random number %d",iRandomNo);
    return 0;
}


//컴퓨터가 내가 입력한 수를 찾게 하는 방법도 만들어보기 