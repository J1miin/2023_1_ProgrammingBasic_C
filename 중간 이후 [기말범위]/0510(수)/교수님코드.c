#include <stdio.h>
//함수의 선언--
int getInteger();
int isPrime(int iNo);
//-----------

int main(){
    int iInval;
    int iFlag;

    while(1){
        iInval = getInteger();
        if (iInval<=0){
            break;
        }

        iFlag= isPrime(iInval);
        if (iFlag==1){
            printf("%d는 소수이다. \n",iInval);
        }
        else{printf("소수가 아닙니다 \n");}

    }
   
}

int isPrime(int iNo){//iNo에 iInval이 들어오는 것임
    int iResult=1;
    
    if(iNo==1){
        iResult=0;
    }

    int i, iFlag;

    for (i=2;i<iNo;++i){
        iFlag=iNo%i;
        if (iFlag==0){
            iResult = 0;
            break;
        }
    }

    return iResult;
}
/*
int isPrime(int iNo){//iNo에 iInval이 들어오는 것임
    int iResult=0;

    return iResult;
}
이 구조를 잡고 함수를 쓰기 시작하는게 좋다.
*/

int getInteger(){
    int inVal ;
    printf("정수를 입력하세요:");
    scanf("%d",&inVal);
    return inVal;
}