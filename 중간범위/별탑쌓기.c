#include <stdio.h>
int main(){
    int ispace,istar,iInput,iLine;
    int ispace_Cnt, iline_Cnt, iline_Cnt_1;
    printf("정수를 입력하세요:");
    scanf("%d",&iInput);

    iLine=iInput/2; //입력받은 값을 2으로 나눈 몫만큼의 줄이 생겨야해서 iLine 변수 선언

    for (iline_Cnt=0; iline_Cnt<iLine; ++iline_Cnt){ 
        iline_Cnt_1=iline_Cnt+1;

        for (ispace=iLine; ispace>iline_Cnt_1; --ispace){ 
            // 공란 만드는 반복문 
            // 공란이 line보다 하나 적게 생겨서 거꾸로 감소하게 식 작성 
            printf(" ");
        }
        
        for (istar=0 ; istar<2*(iline_Cnt_1)-1; ++istar){
            printf("*");
        }

        printf("\n");

    }
    return 0;
}

