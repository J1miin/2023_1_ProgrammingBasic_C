//컴퓨터공학과
//2학년 2022111120
//김지민

#include <stdio.h>
int main() {
    int iInput,i,iLine, iOneline;
    //scanf("%d",&iInput);
    iInput =5;

    for (iLine=0; iLine<iInput; ++iLine){
        iOneline = iLine +1;
        for (i=0; i<iOneline ; ++i){ //iLine이랑 별 찍는 개수가 관계가 있으니 둘의 관계를 봐줘야 함.
        //iline 이 0일 때 1개, iLine이 1일 때 2개, iLinedl 2일 때 3개, 둘이 관계 있음.
        //가로로 찍는 *의 개수는 iLine과의 관계에서 찾아서, 몇 번 가로 방향으로 반복할지를 생각해줘야함.!! 
            printf("*");
        }
        printf("\n");
    }
    


}
//해보기
//5라고 입력했을 때 삼각형 만들기
// 사진 첨부 확인하기
//제약조건 : for문 (i=0; i< ; ++1 )이 형태 이용해서 
// 7/2 해서 3 줄을 찾으면 됨
// 홀수만 입력해야하고, 짝수 찍으면 에러나오게 