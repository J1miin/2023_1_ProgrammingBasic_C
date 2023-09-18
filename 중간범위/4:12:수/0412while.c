//2022111120 김지민
//컴퓨터공학과

#include <stdio.h>
int main(){
    int iSum, iInput;
    iSum = 0 ;

    while (iInput!=0){
        printf("값을 입력하세요 : ");
        scanf("%d",&iInput);
        iSum=iSum+iInput;
    }
    printf("%d \n",iSum);

    return 0;
}
//별로임
//변수 초기화가 안되어 있어서 쓰레기가 우연히 0이면 작동안하게 됨 

