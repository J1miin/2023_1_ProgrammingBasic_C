#include <stdio.h>
int main(){
    int hour, age;
    int price;
    printf("현재 시간과 나이를 입력하시오 (시간, 나이):");
    scanf("%d %d",&hour,&age);
    //17시 이후면 포함한다. 이상인걸로
    if (hour <17){
        if (age>12 && age<65){
            price = 34000;
        } else {
            price = 25000;
        }
    } else {
        price = 10000;

    }
    

    printf("price is %d \n",price);

    return 0;
}
//조건문을 어떻게 더 효율적으로 처리할 수 있는가에 대해서도 언급해줄 것 경우의 수 따져서