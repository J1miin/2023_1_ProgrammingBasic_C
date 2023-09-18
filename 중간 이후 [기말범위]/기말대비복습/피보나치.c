#include <stdio.h>
void fib(int inputNum);
int main(){
    int inputNum;
    int result;
    printf("몇번항까지?");
    scanf("%d",&inputNum);
    fib(inputNum);
    

    return 0;
}

void fib(int inputNum){
    int f1=0;
    int f2=1;
    int result;
    int sum;
    inputNum+=1;
    for (int i=0;i<inputNum;++i){
        if (i==0){
            printf("%d ",f1);
        }else if(i==1){
            printf("%d ",f2);
        }else {
            sum=f1+f2; //1=0+1 -> 2= 1+1
            f1=f2; //f1=1,1
            f2=sum; //f2=1,2
            printf("%d ",sum);
        }
    }
    
}

/*
0+1=1
1+1=2
1+2=3
f1+f2=1
f1=f2;
f2=sum;

*/