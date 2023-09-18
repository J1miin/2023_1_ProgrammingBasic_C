#include <stdio.h>
#define ROW 3
#define COL 3

int main(){
    int Arr[ROW][COL] = {{3,8,2},{5,2,3},{1,6,0}};
    int Cnt[9] = {0}; //카운트를 세는 배열은 굳이 2차원일 필요가 없다.
    int iIndex;
    int i,j;
    //arr[0][1]이라면 6이니까 Cnt[arr[0][1]-1]에 저장
    for (i=0; i<ROW;++i){
        for (j=0; j<COL; ++j){
            if (Arr[i][j]==0){
                continue;
            }
            iIndex=Arr[i][j]-1;
            Cnt[iIndex]=Cnt[iIndex]+1;
        }   
    }
    for (int k=0; k<9 ; ++k){
        printf("%2d",Cnt[k]);
    }
    for (int k=0; k<9 ; ++k){
        if (Cnt[k]==0){
            printf("빠진 수 : %d ", k+1);
        }
    }
    
    return 0;
}