#include <stdio.h>
int main(){
    int i, iNo;
    int sum=0;
    for (i=0;i<10;++i){
        iNo=i+1;
        sum=sum+iNo;
    }
    printf("%d \n",sum);
}