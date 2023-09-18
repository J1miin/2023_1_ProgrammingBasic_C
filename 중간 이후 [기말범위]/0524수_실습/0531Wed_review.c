#include <stdio.h>
void get_arr(int a[],int size);
void prn_arr(int a[],int size);
void sort_arr(int a[],int size);
void swap_arr(int a[],int i, int minLocation);
int main(){
    int iArr[5];
    get_arr(iArr,5);
    prn_arr(iArr,5);
    sort_arr(iArr,5);
    prn_arr(iArr,5);
    return 0;
}

void get_arr(int a[],int size){
    int i;
    for(i=0;i<size;++i){
        scanf("%d",&a[i]);
    }
}
void prn_arr(int a[],int size){
    int i;
    for(i=0;i<size;++i){
        printf("%d",a[i]);
    }
    printf("\n");
}

void sort_arr(int a[],int size){
    int min;
    int minLocation;
    int i,j;
    int tmp;
    for(i=0;i<size;++i){
        min=a[i];
        minLocation=i;
        for(j=i+1;j<size;++j){
            if(min>a[j]){
                min=a[j];
                minLocation=j;
            }
        }
        swap_arr(a,i,minLocation);
    }
}


void swap_arr(int a[],int i, int minLocation){
    int tmp;
    tmp=a[i];
    a[i]=a[minLocation];
    a[minLocation]=tmp;
}
