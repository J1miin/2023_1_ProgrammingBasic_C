#include <stdio.h>
#include <string.h>

int main(){
    char id[]="programming_c_23-1";
    char pw[]="a0B1c2D3@";
    char inputID[10];
    char inputPW[10];

    printf("아이디 입력하세요:");
    char *gets_s(inputID,10);
    
    printf("비번 입력하세요:");
    char *gets_s(inputPW,10);
    if (strcmp(id,inputID)==0 && strcmp(pw,inputPW)==0){
        printf("인증성공! \n");
    }else {
        printf("fail \n");
    }
    return 0;
}