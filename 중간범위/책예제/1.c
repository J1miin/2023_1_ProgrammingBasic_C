#include <stdio.h>
//도전2번 문제
int main(){
    int input1,input2;
    scanf("%d %d",&input1,&input2);
    int ggdanCnt;
    int first,second,res;
    if (input1>input2){
        ggdanCnt=input1-input2+1;
        for (int i=0;i<ggdanCnt;++i){
            first=input2+i;
            for(int j=0;j<9;++j){
                second=j+1;
                res=first*second;
                printf("%d x %d=%d\n",first,second,res);
            }
            printf("\n");
        }
    }else {
        ggdanCnt=input2-input1+1;
        for (int i=0;i<ggdanCnt;++i){
            first=input1+i;
            for(int j=0;j<9;++j){
                second=j+1;
                res=first*second;
                printf("%d x %d = %d\n",first,second,res);
            }
            printf("\n");
        }

    }
    
   
    

    return 0;
}
/*
    for (int i=0;i<9;++i){
        line=(i+1)%2;
        for (int j=0;j<i+1;++j){
            if (line!=0){
                break;
            }
            result=(i+1)*(j+1);
            printf("%d x %d = %d\n",i+1,j+1,result);
        }

    }
*/


/*
int i, sum;
    i=5;
    sum=++i;
    printf("sum= %d,i= %d \n",sum,i);
    //
    int j, sum1;
    j=5;
    sum1=j++;
    printf("sum1= %d,j= %d \n",sum1,j);
    return 0;

*/