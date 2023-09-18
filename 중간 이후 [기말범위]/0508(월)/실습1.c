#include <stdio.h>
#define SIZE 9
int main(){
    int arr[SIZE]={3,8,2,5,2,3,1,6,0};
    int countArr[SIZE]={0}; //순서대로 카운트해서 저장하기 위함

    for (int i=0; i<SIZE; ++i){
        for (int k=0; k<SIZE ; ++k){
            if (arr[i]==k){
                countArr[k]=countArr[k]+1;
            }
        }
    }

    for (int j=0; j<SIZE ; ++j){
        if (countArr[j]>1){
            printf("%d는 중복입니다. \n", j);
        }
        if (countArr[j]==0){
            printf("%d는 빠진 수 입니다. \n",j);
        } 
    }
    return 0;
}