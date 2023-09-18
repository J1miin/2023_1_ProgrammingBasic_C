//구구단 
#include <stdio.h>
int main(){
    int FirstNum, SecondNum, Result ;
    int FirstNum_1;
    //FirstNum=1;
    SecondNum=1;
    Result=FirstNum * SecondNum;
    
    for (FirstNum=0; FirstNum<3 ; ++FirstNum ){
        printf("%d x %d = %d \t", FirstNum_1, SecondNum, Result);
       
    }
     printf("\n");
    // printf("%d x %d = %d \t", FirstNum, SecondNum, Result);

    return 0;
}