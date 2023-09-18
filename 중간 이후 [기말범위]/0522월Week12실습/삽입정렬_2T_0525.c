#include <stdio.h>
#define ROWS 5

int main(){
    int coordinate[ROWS][2] = {{10,3},{3,2},{3,1},{8,9},{2,4}};
    int i, targetIdx, j;
    int tmp;
    for(i=0;i<ROWS-1;++i){
        targetIdx=i+1;
        for (j=targetIdx;j>=1;--j){
            //printf("i=[%d] j=[%d] x좌표[j]=[%d] x좌표[j-1]=[%d] \n",i,j,coordinate[j][0],coordinate[j-1][0]);
            if(coordinate[j][0]<coordinate[j-1][0]){
                //x좌표 바꾸고
                tmp=coordinate[j][0];
                coordinate[j][0]=coordinate[j-1][0];
                coordinate[j-1][0]=tmp;
                //y좌표 바꾸기
                tmp=coordinate[j][1];
                coordinate[j][1]=coordinate[j-1][1];
                coordinate[j-1][1]=tmp;
                //printf("i=[%d] j=[%d] x좌표[j]=[%d] x좌표[j-1]=[%d] \n",i,j,coordinate[j][0],coordinate[j-1][0]);
            }else if (coordinate[j][0]==coordinate[j-1][0]){
                //x좌표가 같다면
                if(coordinate[j][1]<coordinate[j-1][1]){
                    tmp=coordinate[j][1];
                    coordinate[j][1]=coordinate[j-1][1];
                    coordinate[j-1][1]=tmp;
                }
            }else{

                //printf("else에서의 i=[%d] j=[%d] \n",i,j);
                continue;
            }
        }    
    }
    for(int k=0;k<ROWS;++k){
        printf("%d ,%d \n",coordinate[k][0],coordinate[k][1]);
    }




    return 0;
}