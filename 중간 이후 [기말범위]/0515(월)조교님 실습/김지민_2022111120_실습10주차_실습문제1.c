//실습문제1 : 보고서는 간단하게 코드 설명, 0 처리
//실습문제2 : 소문자 알파벳만!
//추가문제 : 기존의 기능을 함수화하기. 배열을 매개변수로 넘기는 배운 적 없으니 메인함수 바깥에 전역 변수로 세팅하고 진행하면 된다.
//사진 참고 -> 변수를 전역변수로 선언 

#include <stdio.h>
int is_multiple(int n, int m);
int main(){
    int n,m;
    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d",&n);
    printf("두 번째 정수를 입력하시오: ");
    scanf("%d",&m);
    if (n==0 || m==0){
        printf("0은 입력할 수 없습니다.\n");
    }
    else {
        if (is_multiple(n,m)==1){
            printf("%d은 %d의 배수입니다.\n",n,m);
        }else if (is_multiple(n,m)==0){
            printf("%d은 %d의 배수가 아닙니다.\n",n,m);
        }else {
            printf("%d은 %d의 배수 입니다.\n",n,m);
        }
    }
    
    
    return 0;
}
int is_multiple(int n, int m){
    int result;
    int check;

    check = n%m;
    if (check==0){
        result = 1;
    }else{
        result = 0;
    }

    return result;
}