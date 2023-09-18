//환율 계산 프로그램
#include <stdio.h>
int main(){
    int iWon;
    double dDollar ;
    printf("원화를 정수로 입력해주세요: ");
    scanf("%d",&iWon);
    dDollar = iWon / 1303.5;
    printf("%d원은 달러로 %.3lf 달러 입니다 \n", iWon, dDollar);
    return 0 ;
}10