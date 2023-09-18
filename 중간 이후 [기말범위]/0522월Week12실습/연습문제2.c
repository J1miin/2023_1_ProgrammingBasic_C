//배열 사이즈는 5이상 
#define SIZE 5
#include <stdio.h>

void array_copy(int a[], int b[], int size);

int main() {
    int a[SIZE]={1,2,0,4,5};
    int b[SIZE]={0};
    int size=5;
    array_copy(a,b,size);
    printf("\n배열이 복사되었음.\n");
    
    printf("a[%d]: ",size);
    for (int i=0;i<SIZE;++i){
        printf("%d",a[i]);
    }
    printf("\n");

    printf("b[%d]: ",size);
    for (int i=0;i<SIZE;++i){
        printf("%d",b[i]);
    }

    return 0;
}

void array_copy(int a[], int b[], int size){
    
    //복사한 b[] 배열 
    for (int i=0;i<size;++i){
        b[i]=a[i];
    }    
}