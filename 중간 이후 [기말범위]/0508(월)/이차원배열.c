#include <stdio.h>
#define ROW 3
#define COL 3

int main(){
    int Arr[ROW][COL] = {{1,6,7},{2,3,9},{8,0,5}};
    int Cnt[9] = {0};
    int iIndex;
    //arr[0][1]이라면 6이니까 Cnt[arr[0][1]-1]에 저장
    for (int i=0; i<3;++i){
        for (int j=0; j<3; ++j){
            iIndex=Arr[i][j]-1;
            Cnt[iIndex]=Cnt[iIndex]+1;
        }   
    }
    for (int k=0; k<9 ; ++k){
        if (Cnt[k]>1){
            printf("중복된 수 : %2d", Cnt[k]);
        }
    }
    
    return 0;
}