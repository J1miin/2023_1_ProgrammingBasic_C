#include <stdio.h>
int main(){
    int Arr[10]={3,8,9,5,2,3,1,6,4,7};
    int iMin, iMinIdx;
    int temp;
    int i,j;
    for (j=0;j<10;++j){
        //첫번째 원소와 최소값을 찾아서 비교하는 용도
        iMin=Arr[j];
        iMinIdx=j;
        for (i=j+1;i<10;++i){//i가 j+1인 이유는, j번째 제외한 나머지 뒤의 원소들과 쭉 비교를 해야하기 때문!
            if (Arr[i]<iMin){
                iMin=Arr[i];
                iMinIdx=i;
            }
        }
        printf("최소값:[%2d], index:[%2d]\n",iMin,iMinIdx);
        temp=Arr[j];
        Arr[j]=Arr[iMinIdx];
        Arr[iMinIdx]=temp;
    }
    for (int k=0;k<10;++k){
        printf("[%2d]",Arr[k]);
    }

    return 0;
}