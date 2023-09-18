#include <stdio.h>
int main() { //형변환 이용하기 
    int Imass, Ivelocity ;
    int result;
    printf("질량(kg):");
    scanf("%d",&Imass);
    printf("속도(m/s):");
    scanf("%d",&Ivelocity);
    result = Imass * Ivelocity*Ivelocity / (2.0);
    printf("운동에너지(J): %f \n", (double)result);
    return 0 ;
} 
