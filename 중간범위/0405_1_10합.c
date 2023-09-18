//1부터 10까지의 합 구하기 

#include <stdio.h>
int main(){
        int iSum, i, iNo;
        
        iSum = 0+0;//이게 리얼 프로그래밍다운 것이다. 
        iSum = 0+1; //0을 생각할 줄 알아야한다. 그리고 그 0이 변수로 존재할 수 있음을 봐야한다. 
        iSum=iSum+1 //이렇게 바꾼다.
        iSum = 1+2;
        iSum = 3+3;
        iSum = 6+4; //오른쪽의 식이 0부터 4까지 하나씩 증가하고 있음을 발견한다. 
        // change
        iSum = iSum+1;
        iSum = iSum+2;
        iSum = iSum+3;
        iSum = iSum+4;
        // 그 다음 for 문을 쓴다. 
        iSum = 0+0;
        for (i=0;i<10;i++){
            iNo=i+1;
            iSum=iSum+iNo; //교수님은 아래 식을 이 식으로 쓰신다. 
            
            iSum=iSum+i+1//바뀌는 값만 i로 치환해준다. +1은 0부터 시작해서 더해준 것임
        }


        return 0;
}
//출력값은 무조건 변수로 잡는다.
/*
    합을 구하라는 문제에는 입력값은 없고, 출력값만 있는데, 그럴 때 출력값은 무조건 변수로 잡는다. 
    세 번 반복되면 반복문을 쓴다. 
*/