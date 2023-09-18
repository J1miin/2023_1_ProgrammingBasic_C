//scanf 에러가 나올 때, #define _CRT_SECURE_NO_WARNINGS 구문을 적어주면, 경고는 유지되지만 오류가 사라져 프로그램이 정상적으로 작동한다.
#include <stdio.h> 
    int main () {
        int iRadius;
        double dArea;

        printf("원의 반지름(정수)을 입력하세요 :");
        scanf("%d",&iRadius);
        dArea = 3.14 * iRadius * iRadius ;
        printf("입력한 값은 %d입니다. \n",iRadius);
   
        printf("반지름 %d인 원의 넓이는 %.3lf \n",iRadius, dArea);
        return 0; }

        // 원반지름 입력받고 원 넓이 제공하고 둘레도 제공하자