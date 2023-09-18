#include <stdio.h>
int main(){
    int i, iResult, iNo ;
    iResult=1;

    //iResult=1*1;

    for (i=0;i<10;i++){
        iNo=i+1;
        iResult=iResult*iNo;
    }
    printf("%d \n",iResult);
    /*
    iResult=1*2;
    iResult=2*3;
    iResult=6*4;
    iResult=24*5;
    */
    return 0;
}