#include <stdio.h>
int main(){
    int arr[5]={5, 16, 1, 4, 12};
    int temp;
    
    for(int i=1;i<5;i++){
        int j=i-1;
        while((arr[j] > arr[j+1])&&(j>=0)){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
