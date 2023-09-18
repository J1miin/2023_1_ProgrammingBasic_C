#include <stdio.h>
int main(){
    int iInput, iYear, iDay, iHour, iMin, iSec ;
    

    printf("시간을 초로 입력하세요: ");
    scanf("%d",&iInput);

    
    iSec = iInput % 60;
    iMin = iInput / 60;
    iHour = iInput / (60*60);
    iDay = iInput/(60*60*24);
    iYear = iInput/(86400*365);


    printf("%d년 %d일 %d시 %d분 %d초 입니다", iYear, iDay, iHour, iMin, iSec);


}