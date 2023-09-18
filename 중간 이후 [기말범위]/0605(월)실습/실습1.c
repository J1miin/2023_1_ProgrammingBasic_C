#include <stdio.h>
#include <ctype.h>

//'문자'입출력 라이브러리 함수 사용할 것
// getchar()
int main(){
    char code[7]="";
    printf("암호를 입력하세요:");
    int input;
    int count;
    count =0;
    int small,big,num;
    small=0;
    big=0;
    num=0;
    
    while((input = getchar())!=EOF){
        code[count]=putchar(input);
        count++;
        
        for(int i=0;i<7;++i){
            if (isupper(code[i])){
                big+=1;
            }
            if (islower(code[i])){
                small+=1;
            }
            if (isdigit(code[i])){
                num+=1;
            }
        }
        if (big*small*num==0){
            printf("유효하지 않은 암호입니다. \n");
        }
        else{
            printf("유효한 암호입니다.\n");
        }
        
    }


    return 0;
}