#include <stdio.h>

int main(){
    int divby7, divby9;

    for(int i =1 ; i<100; ++i){
        divby7=i%7;
        divby9=i%9;
        if (divby9==0 || divby7==0){
            printf("%d \n",i);
        }
    }
    return 0;
}