#include <stdio.h>
int main() {
    int Arr[10]={3,8,9,5,2,3,1,6,4,7};
    int i,j;
    int iMin, iMinIdx; //최소값이 결정될 때마다 인덱스를 저장해줘야함.
    int temp;

    for (j=0; j<10;++j){
        //알아야 하는 것: 최솟값과 최솟값의 인덱스 번호 (인덱스번호 알아야 스왑 가능하니까) 
        iMin =Arr[j];
        iMinIdx = j;
        for (i=j+1; i<10; ++i){
            if (Arr[i]<iMin){
                iMin = Arr[i];
                iMinIdx=i;
            } //최소부터 찾기 //인덱스값 찾는 연습을 할 것!
        }
        printf("최소값은 [%d], 인덱스 위치는 [%d]\n",iMin,iMinIdx);
        temp=Arr[j];
        Arr[j]=Arr[iMinIdx];        
        Arr[iMinIdx]=temp;
    }
    for (j=0; j<10; ++j){
        printf("%2d",Arr[j]);
    }
    printf("\n");
    return 0;
}
/*
for (j=0;j<10;++j){
        if (Arr[j]<iMin){
            temp=Arr[j];
            Arr[j]=iMin;                iMin=temp;
        }
    }
*/