#include <stdio.h>
int main(){
    double dInput1, dInput2, dInput3 ; //dNo1도 괜춘괜춘
    double dSum, dAverage;

    printf("실수값을 세 개 입력해주세요: ");
    scanf("%lf %lf %lf",&dInput1, &dInput2, &dInput3);
    dSum = dInput1 + dInput2 + dInput3;
    dAverage = dSum/3;
    printf("전체합 : %.3lf, 평균 : %.3lf ",dSum, dAverage);
    return 0;
}