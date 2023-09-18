//과제2번
#include <stdio.h>
#define SIZE 5
int main(){
    int iArrX[SIZE]={4,3,2,5,2};
    int iArrY[SIZE]={1,2,4,2,6};
    int i,j,tempX,tempY;

    /*
    for (i=0;i<SIZE;++i){
        printf("x와 y좌표를 순서대로 입력하세요:");
        scanf("%d %d",&iArrX[i], &iArrY[i]);
    }
    printf("/n");
    */
    for (j=0;j<SIZE-1;++j){
        for (i=0; i<SIZE-j-1; ++i){
            if (iArrX[i]>iArrX[i+1]){
                tempX=iArrX[i];
                iArrX[i]=iArrX[i+1];
                iArrX[i+1]=tempX;

                tempY=iArrY[i];
                iArrY[i]=iArrY[i+1];
                iArrY[i+1]=tempY;
            }
            else if (iArrX[i]==iArrX[i+1]){
                if(iArrY[i]>iArrY[i+1]){
                    tempX=iArrX[i];
                    iArrX[i]=iArrX[i+1];
                    iArrX[i+1]=tempX;

                    tempY=iArrY[i];
                    iArrY[i]=iArrY[i+1];
                    iArrY[i+1]=tempY;
                }
            }
            else {
                continue;
            }
        }
    }


    //좌표 받은 거 확인용 출력이었음
    for (int k=0;k<SIZE;++k){
        printf("(%d,%d)",iArrX[k],iArrY[k]);
    } 

    return 0;
}