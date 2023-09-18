#include <stdio.h>
int main(){
    int iArr[10]={1,3,4,4,2,5,6,7,9,1};
    int count[10]={0};
    int i,j;

    for(i=0;i<10;++i){
        for(j=0;j<10;++j){
            if (iArr[i]==j){
                count[j]+=1;
            }
        }
    } 
    for (int k=0;k<10;++k){
        if(count[k]>1){
            printf("%d는 중복입니다.\n",k);
        }else if (count[k]==0){
            printf("%d는 빠진 수 입니다.\n",k);
        }else {

        }
    }
    return 0;
}