#define TRUE 1 
#include <stdio.h>

int main(){
    char cInput;
    while (TRUE){
        scanf("%c",&cInput);

        if (cInput>='a'&& cInput<='z'){
            cInput=cInput-32;
            printf("%c\n",cInput);

        }
        if (cInput=='0'){
            printf("입력이 잘못되었습니다.");
            break;
        }

    }
    

    return 0;
}


//컴퓨터가 내가 입력한 수를 찾게 하는 방법도 만들어보기 