#include <stdio.h>
int main(){
    int input; //입력 얼마나 받을지
    int fib=0;
    int f0, f1;
    f0=0;
    f1=1;
    printf("몇 번째 항까지 구할까요? : ");
    scanf("%d",&input);
    for (int i=0; i<=input;++i){
        if (i==0){
            fib = f0;
        } else if (i==1){
            fib = f1;
        } else { //수열을 처리하는 방법
            fib = f0+f1;
            f0=f1;
            f1=fib;
            //f0=0, f1=1 -> 
            //fib=1, f0=1, f1=(fib값)1
            //fib=1+1=2 , f0=1, f1=2(fib값)
            //fib=1+2=3, f0=2, f1=3
        }
        printf("%d,",fib);
    }
    return 0;
}
