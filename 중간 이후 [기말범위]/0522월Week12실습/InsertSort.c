#include <stdio.h>
#define ARRSIZE 4
int main(){
    int iArr[ARRSIZE]={3,2,4,5};
    int i, check,j;
    int tmp, iIdx;
    int target;
    int key;

    for (i=1;i<ARRSIZE;++i){ //삽입될 타켓 아이 
        key=iArr[i];
        while(1){
            j=i-1;
            if(j < 0 && list[j] < iArr[i]){
                break;
            }

        } 
    }
    return 0;
}

/*
5342
1)
3542
2)
3452
3452 (3<4니까 바뀜 없음)
3)
3425
3245
2345 (끝)

for (j=i-1;j>=0;++j){ //삽입될 아이 앞에 있어서 비교될 녀석들
            //
            //쭉 한 번에 내림차순으로 쭉 비교하려고 하지말고,
            // 2개씩 나눠서 비교할 생각을 해야하는구나  
            i=3 -> 
                3-0-1 = 2 번 인덱스 비교
                3-1-1 = 1 번 인덱스 비교
                3-2-1 = 0 번 인덱스 비교
        }  
*/