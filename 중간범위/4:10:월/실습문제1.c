#include <stdio.h>
int main(){
    int iInput, ispace, iLine, iOneline, istar ; 
    
    printf("정수를 입력하세요 :");
    scanf("%d",&iInput);

    for (iLine=0; iLine<iInput; ++iLine){
        iOneline=iLine+1;

        for (ispace=iInput ; ispace>iOneline; --ispace){
            printf(" ");  
        }

        for (istar=0;istar<iOneline;++istar){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
만약에 인풋이 3이라면
11*
1**
***
*/
//어떤 방식으로 for문을 분리해서 작성을 하는가
//공란을 찍는 반복문과 별을 찍는 반복문을 따로 만들어주기 
