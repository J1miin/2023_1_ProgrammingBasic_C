#include <stdio.h>
int main() {
    double dWidth, dLength ;
    double dArea, dPerimeter;
    
    printf("사각형의 가로 세로 길이를 실수형으로 순서대로 입력해주세요: ");
    scanf("%lf %lf", &dWidth, &dLength);
    dArea = dWidth * dLength;
    dPerimeter = 2*(dWidth+dLength);
    printf("사각형의 넓이 : %lf \n사각형의 둘레 : %lf \n", dArea, dPerimeter );
    return 0;
}