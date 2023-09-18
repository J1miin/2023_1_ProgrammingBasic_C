//실습문제2.c -> 한글 없는 경우만 하도록, 한글 제외 대문자와 특수문자만 처리한다.
#include <stdio.h>
int check_alpha(char c);

int main(){
    char inputChar;
    int result;
    printf("문자를 입력하세요 : ");
    scanf("%c",&inputChar);
    result = check_alpha(inputChar);
    if (result==1){
        printf("%c는 알파벳 문자입니다.\n",inputChar);
    }else {
        printf("%c는 알파벳 문자가 아닙니다.\n",inputChar);
    }
    return 0;
}

int check_alpha(char c){
    int result;
    if (c>=97&&c<=122){
        result = 1;
    }
    else{
        result = 0;
    }
    return result;
}