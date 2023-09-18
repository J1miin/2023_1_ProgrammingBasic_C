#include <stdio.h>
int pswap(int**pa, int**pn);

int main(){
    int a,b ;
    int * pa, *pb;

    pa = &a ;
    pb = &b ;

    printf("address that pa points : %p \n",pa);
    printf("address of pa : %p \n", &pa);
    printf("address that pb points\n",pb);
    printf("address of pb : %p \n", &pb);      

    printf ("---call---");
    pswap(&pa, &pb);
    printf("--call done--");
    
    printf("address that pa points : %p \n",pa);
    printf("address of pa : %p \n", &pa);
    printf("address that pb points\n",pb);
    printf("address of pb : %p \n", &pb);     
    return 0;
}
int pswap(int **ppa, int **ppb){
    int *temp = *ppa;
    printf("ppa가 가리키는 변수의 주소값: %p \n",ppa);
    printf("ppb가 가리키는 변수의 주소값: %p \n",ppb);   
    *ppa=*ppb;
    *ppb=temp;
    return 0;
}