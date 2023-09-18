//배열에서 최대최소 찾기
#define SIZE 3
#include <stdio.h>
int Max_f(int a[]);
int Min_f(int a[]);
int main(){
    int max, min;
    int iArr[SIZE]={5,3,1};
    max=Max_f(iArr);
    min=Min_f(iArr);
    printf("max is %d , min is %d \n",max,min);
    return 0;
}

int Max_f(int a[]){
    int max;
    max=a[0];
    for (int i=0;i<SIZE;++i){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}


int Min_f(int a[]){
    int min;
    min=a[0];
    for (int i=0;i<SIZE;++i){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}