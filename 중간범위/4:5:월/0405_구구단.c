//컴퓨터공학과 2학년 
//2022111120 김지민 

#include <stdio.h>
int main(){
    int iInput, iResult, i , iNo;
    scanf("%d",&iInput);
    
    if (iInput >=1 && iInput <= 9){
        for (i=0;i<9;i++){
                iNo=i+1;
                iResult=iInput*iNo;
                printf("%d * %d = %d \n", iInput,iNo,iResult );
            }
    }else {
        printf("1-9사이의 정수가 아닙ㄴ디ㅏ. ");
    }
   
    return 0;
}

/*
5단 할거면, 
5*1=5
5*2=10
5*3=15
...

*/