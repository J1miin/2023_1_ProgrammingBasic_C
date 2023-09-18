//소수인지 계산
#include <stdio.h>
int findPrime(int x);

int main(){
    int inputPrime;
    int result;
    scanf("%d",&inputPrime);

    result = findPrime(inputPrime);
    
    if (result==1){
        printf("%d는 소수임",inputPrime);
    } else {
        printf("%d 소수 아님",inputPrime);
    }
    return 0;    
}

int findPrime(int x){
    int primeCal;
    int check;
    for (int i=2;i<x;++i){
        primeCal=x%i;

        if(primeCal==0){
            check = 0;
            break; 
        }
        else {
            check = 1;
        }
    }
    return check;
}