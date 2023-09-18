#define TRUE 1
#include <stdio.h>

int main(){
    int iSum, iInput;
    iSum = 0 ; //초기화하기 보다 따로 이렇게 사용하기 바로 전에 정의해주는게 프로그램의 리더빌리티가 좋다.

    while (TRUE){
        printf("값을 입력하세요 : ");
        scanf("%d",&iInput);
        
        if (iInput==0){
            break;
        }
        
        iSum=iSum+iInput;
        
    }
    printf("%d \n",iSum);

    return 0;
}
