#include <stdio.h>
int main(){
    int iInput, i, iNO, iline, iOneline;
    printf("정수를 입력하시오:");
    scanf("%d", &iInput);
    
    for (iline=0; iline<iInput; ++iline){
        iOneline=iline+1;

        for (i=0; i<iOneline; ++i){
        iNO=i+1;
        printf("%d",iNO); 
        }

        printf("\n");
    }


    return 0;
}