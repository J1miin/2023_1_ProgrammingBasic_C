#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
    int Arr[ROWS][COLS]={{3,8,2},{5,2,3},{1,6,0}};
    int Cnt[9]={0};
    int i,j,CntIndx;
    for (i=0;i<ROWS;++i){
        for (j=0;j<COLS;++j){
            if(Arr[i][j]==0){
                continue;
            }
            CntIndx=Arr[i][j]-1;
            Cnt[CntIndx]+=1;
        }
    }

    for (int k=0;k<9;++k){
        if (Cnt[k]==0){
            printf("빠진 수 = %d\n",k+1);
        }
        if (Cnt[k]>1){
            //printf("중복된 수 = %d",k+1);
        }
    }


    /*
    Arr[1][2]=3이 겠네, 그럼 cnt에서 3번쨰 즉 인덱스 2번에 카운트를 올려줘야겠다.
    CntIdx=Arr[1][2]-1;

    */
    return 0;
}