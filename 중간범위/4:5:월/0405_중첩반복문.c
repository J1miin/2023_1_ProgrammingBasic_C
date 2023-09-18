#include <stdio.h>
int main(){
    int iCnt,i,iLine;
    
    iCnt=4;

    for (iLine=0; iLine<iCnt; ++iLine){
        for (i=0;i<iCnt;i++){
        printf("*");
        }
        printf("\n");
    }

    /*
    
    for (i=0;i<iCnt;i++){
        printf("*");
    }
    printf("\n");
    이렇게 한 번 해보고, 또 반복문에 넣을 생각을 해보자.
    */ 
    
    //printf("*\n"); //pf. 할 수 있는 것부터 입력한다.

    return 0;
}

/* 나의 것
    int i, iInput, j;
    char cStar ='*';
    scanf("%d",&iInput);
    
    for (i=0;i<iInput ; i++){
        for (j=0; j<iInput; j++){
            printf("%c",cStar);
        }
        printf("\n");
    }
    
*/