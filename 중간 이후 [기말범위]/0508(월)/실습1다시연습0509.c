#include <stdio.h>
#define SIZE 9

int main () {
    int Arr[SIZE]={3,8,2,5,2,3,1,6,0};
    int Cnt[SIZE]={0}; //0으로 우선 초기화 해주기
    int i, CntIndx;
    /* Arr[1]=3이겠지
    그러면 Cnt[9]는 3이 있다고 올려줘야해. 즉 3번쨰 칸을 카운트 업 해줄거야.
    index상으로는 3보다 하나 작은 2겠지*/
    for (i=0;i<SIZE;++i){
        CntIndx=Arr[i]-1;
        Cnt[CntIndx]=Cnt[CntIndx]+1;
    }
    for (i=0;i<SIZE;++i){
        if (Cnt[i]>1){
            printf("중복된 수 = [%d]\n",i+1);
        }
        if (Cnt[i]==0){
            printf("빠진 수 = [%d]\n",i+1);
        }
    }
    return 0;
}