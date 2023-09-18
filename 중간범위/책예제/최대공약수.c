//도전3 최대공약수
#include <stdio.h>
int main(){
    int input1, input2;
    input1=6;
    input2=9;
    int m;
    if (input1<input2){
        for (int i=input1;i>1;--i){
        
            if (input1%i==0 && input2%i==0){
                printf("%d",i);
                }
        }
    }
    
    return 0;
}