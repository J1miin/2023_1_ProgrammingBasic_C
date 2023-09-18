//환율 계산 프로그램
#include <stdio.h>
int main(){
    double dKorea, dDollar ;
    printf("원화를 입력하세요: ");
    scanf("%lf",&dKorea);
    dDollar = dKorea * 0.00077;
    printf("달러로는 %lf 달러 입니다", dDollar);
    return 0 ;
}