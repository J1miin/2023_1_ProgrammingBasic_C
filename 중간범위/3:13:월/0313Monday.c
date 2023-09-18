//scanf 에러가 나올 때, #define _CRT_SECURE_NO_WARNINGS 구문을 적어주면, 경고는 유지되지만 오류가 사라져 프로그램이 정상적으로 작동한다.
#include <stdio.h> 
    int main () {
        int iRadius; //이렇게 친절하게 변수 이름을 정해주자
        double dPi, dS, dL;
        dPi = 3.14;

        printf("원의 반지름을 입력하세요 :");
        scanf("%d",&iRadius);
        dS = dPi * iRadius * iRadius ;
        dL = dPi * 2 * iRadius ;
    
        printf("넓이는 %lf, 둘레는 %lf \n",dS,dL);
        return 0; }

        // 원반지름 입력받고 원 넓이 제공하고 둘레도 제공하자