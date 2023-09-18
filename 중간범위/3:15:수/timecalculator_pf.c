#include <stdio.h>
int main(){
    int iInput;
    int iYear;
    int iDay;
    int iHour;
    int iMin;
    int iSec ;    

    //printf("시간을 초로 입력하세요: ");
    //scanf("%d",&iInput);
    
    iInput=1000000000;

    iSec = iInput % 60;
    iMin = iInput / 60;

    iHour = iMin / 60;
    iMin= iMin%60; //이걸 생각을 못했구나. ㅠ.. 위에 걸 찍어보면서 알아가는 것. 변수의 재사용을 생각해랑..ㅠㅣ
    //조각조각짜며 덧붙여 나가라 
    
    
    iDay = iHour/24;
    iHour = iHour%24;

    iYear = iDay/365;
    iDay=iDay%365;

//왔다갔다하면서 짜고, 생각의 흐름을 알자.
//iDay, iMin 등 한 번 쓴 변수를 재정의할 생각을 못했다. 

    printf("%d년 %d일 %d시 %d분 %d초 입니다", iYear, iDay, iHour, iMin, iSec);


}