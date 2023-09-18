//print 출력함수는 main에서 하는 것이 좋다.
#include <stdio.h>
int get_tax(int income);
int main(){
    int input;
    printf("소득을 입력하시오(만원): ");
    scanf("%d",&input);
    printf("소득세는 %d 입니다.\n", get_tax(input));
    return 0;
}
int get_tax(int income){
    int tax_result;
    int over1000;

    if (income<=1000){
        tax_result=income*0.08;
    }else {
        tax_result= (income-1000)*0.1+(1000*0.08);

    }
    return tax_result;
}