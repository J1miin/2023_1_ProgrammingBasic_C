//0601 
//(*p)++ 확인
#include <stdio.h>
int main(){
    int i=4;
    int v;
    int * p ;
    p=&i;

    printf("address of p = %p \n",p);
    v=(*p)++;
    printf("v is %d \n",v);
    printf("i = %d \n",i);
    printf("address of p = %p \n",p);
    return 0;
}