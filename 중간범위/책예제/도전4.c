//도전4가 아니라 사실 도전 5네 
#include <stdio.h>
int main(){
    int divideNum, checkMod;
    int Mod0Cnt,totalPrimeNum;
    //Mod0Cnt=0;
    totalPrimeNum=0;
    for (int i =2; totalPrimeNum<10 ;++i){
        Mod0Cnt=0;
        //i = 소수인지 아닌지 확인 대상이 되는 숫자
        for (int j=0;j<i;++j){
            divideNum=j+1; //확인려는 숫자부터 1까지 나누는 수
            checkMod=i%divideNum;
            if (checkMod==0){
                Mod0Cnt=Mod0Cnt+1;
            }
        }
        if (Mod0Cnt==2){
            printf("%d \n",i);
            totalPrimeNum+=1;
            
        }
        
    }
    return 0;
}