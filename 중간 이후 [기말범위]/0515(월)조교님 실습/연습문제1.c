#include <stdio.h>
int avsolute(int n);
int even(int n);
int sign(int n);

int main(){
    int inputNum;
    printf("input integer: ");
    scanf("%d",&inputNum);
    printf("even()의 결과: %d\n",even(inputNum));
    printf("absolute()의 결과: %d\n",avsolute(inputNum));
    printf("sign()의 결과: %d\n",sign(inputNum));
    return 0;
}

int even(int n){
    int evenCheck;
    evenCheck=n%2;
    int result;
    if (evenCheck==0){
        result = 1;
    } else {
        result = 0;
    }

    return result;
}

int avsolute(int n){
    int result;
    if (n<0){
        result = -n;
    }
    else {
        result = n;
    }
    return result;
}
int sign(int n){
    int result;
    if (n<0){
        result = -1;
    }else if(n>0){
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}