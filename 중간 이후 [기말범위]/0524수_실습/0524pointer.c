//배열 입력 함수
//배열 출력 함수
// swap 함수

#include <stdio.h>

void getArr(int iArr[], int size);
void printArr(int iArr[],int size);
void sortArr(int iArr[], int size);
void swapArr(int iArr[],int size);

int main(){
    int iArr[10];
    getArr(iArr,10);
    printArr(iArr,10);
    sortArr(iArr,10); //swap 함수 만들어서 sort 진행 시 swap함수 이용하기.
    printArr(iArr,10); //정렬
    return 0;
}

void getArr(int iArr[], int size){
    for (int i=0;i<size;++i){
        scanf("%d",&iArr[i]);
    }
}
void printArr(int iArr[],int size){
    for (int i=0;i<size;++i){
        printf("%d ",iArr[i]);
    }
    printf("\n");
}
void sortArr(int iArr[], int size){
    swapArr(iArr,size);
}

void swapArr(int iArr[],int size){
    int temp;
    int max;
    max=iArr[0];
    for (int i=0;i<size;++i ){
        if (iArr[i]>max){
            temp=max;
            max=iArr[i];
            iArr[i]=temp;
        }
    }

}