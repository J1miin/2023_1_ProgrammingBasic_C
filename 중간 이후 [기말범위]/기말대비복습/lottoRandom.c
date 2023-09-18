//6개의 랜덤 숫자를 중복없이 만들어서 배열에 저장하기
//이미 2개의 중복없는 랜덤 숫자가 만들어졌다고 가정하고
//다음 숫자를 만드는 단계를 생각하자 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int main(){
    srand(time(0));
    // (rand()%100)+1;
    int randomNum,i,count;//count는 랜덤숫자 몇 개 만들었는지 기록
    int iArr[SIZE]={0};
    count =0;
    //3번째 숫자를 만든다고 가정하자고
    while(1){
        randomNum=(rand()%100)+1;
        for(i=0;i<count;++i){
            if (iArr[i]==randomNum){
                break;
            }
        }
        if (i==count){
            iArr[i]=randomNum;
            count+=1;
        }
        if (count==SIZE){
            break;
        }
    }
    
    for(int j=0;j<SIZE;++j){
        printf("%d ", iArr[j]);
    }
    return 0;
}