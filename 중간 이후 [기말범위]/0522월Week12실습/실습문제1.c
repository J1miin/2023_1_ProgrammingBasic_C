//벡터의 내적 
/*
double로 선언 -> 함수도 더블이 반환값 
3차원 벡터 -> 굿노트 확인
*/
#define SIZE 3
#include <stdio.h>
double vector_dot_prod(double x[],double y[]);
void print_func(double x[], double y[], double size);

int main(){
    double dArray_X[SIZE]={0};
    double dArray_Y[SIZE]={0};
    //2차원 배열로 받아도 된다. [2][3(x1,y1,z1)]
    double dot_prod_result; 

    printf("3차원 벡터 X를 x,y,z 순으로 입력하시오. \n");
    scanf("%lf %lf %lf",&dArray_X[0],&dArray_X[1],&dArray_X[2]);

    printf("3차원 벡터 Y를 x,y,z 순으로 입력하시오. \n");
    scanf("%lf %lf %lf",&dArray_Y[0],&dArray_Y[1],&dArray_Y[2]);
    
    dot_prod_result = vector_dot_prod(dArray_X,dArray_Y);
    print_func(dArray_X,dArray_Y,dot_prod_result);
    
    return 0;
    system(”pause”);
}

double vector_dot_prod(double x[],double y[]){
    double result;
    result =0;
    for(int i=0;i<SIZE;++i){
        result = result + x[i]*y[i];
    }
    
    return result;
}

void print_func(double x[], double y[], double result){
    printf("[ ");
    for (int i=0;i<SIZE;++i){
        printf("%.2lf ", x[i]);
    }
    printf("]*[ ");
    for (int i=0;i<SIZE;++i){
        printf("%.2lf ", y[i]);
    }
    printf("] = %.2lf\n",result);
}