#include <stdio.h>
int main(){
    int iInput1, iInput2;
    int Divide;
    int dividing_1, dividing_2, dividing_R1, dividing_R2;
    int i;

    printf("정수 2개를 입력하시오:");
    scanf("%d %d", &iInput1,&iInput2);

    72 120
    2: 36 60
    2: 18 30
    2: 9 15
    3: 3 5
    dividing_1=72/2;
    dividing_2=120/2;
    dividing_R1= 72%2;
    dividing_R2= 120%2;

    if (dividing_R1==0 && dividing_R2==0){
        dividing_1=dividing_1/2;
        dividing_R1=dividing_1%2;
        dividing_2=dividing_2/2;
        dividing_R2=dividing_2%2;

        if (dividing_R1==0 && dividing_R2==0){
            dividing_1=dividing_1/2;
            dividing_R1=dividing_1%2;
            dividing_2=dividing_2/2;
            dividing_R2=dividing_2%2;

            if (dividing_R1==0 && dividing_R2==0){
            dividing_1=dividing_1/2;
            dividing_R1=dividing_1%2;
            dividing_2=dividing_2/2;
            dividing_R2=dividing_2%2;

                if (dividing_R1==0 && dividing_R2==0){
                dividing_1=dividing_1/2;
                dividing_R1=dividing_1%2;
                dividing_2=dividing_2/2;
                dividing_R2=dividing_2%2;
                } 

            } 
        } 

    } else 
    

    


    return 0;
}