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
