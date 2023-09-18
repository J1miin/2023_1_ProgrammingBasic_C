//버블정렬이 아니라 삽입정렬로 ... ㅠㅠ ㅠㅠㅠ ㅠㅠ 
// 32767은 상수로 설정해서 해도 됨 
// 이차원 배열로도 가능합니다. 저번주 조교님 결과 참고해서 
// 이번에는 추가문제 없다ㅎㅎㅎㅎ
// 보고서에는 코드 파일을 넣을 필요 없음

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 5
void inserSort(int coordinate[][2]);

int main(){
    srand((unsigned int)time(0));
    int i,j,tmp_x, tmp_y;
    int coordinate[ROWS][2] = {0,};
    
    for (i=0;i<ROWS;){
        
        tmp_x=rand()%(200+1)-100;
        tmp_y=rand()%(200+1)-100;

        for(j=0;j<=i;++j){
            if (coordinate[j][0]==tmp_x && coordinate[j][1]==tmp_y){
                break;
            }
        }

        if (j==i+1){
            coordinate[i][0]=tmp_x;
            coordinate[i][1]=tmp_y;
            ++i;
        }else {
            continue;
        }
    }
    inserSort(coordinate);

    
    return 0;
    
}

void inserSort(int coordinate[][2]){
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

}
/*
x좌표부터 만들고, x좌표가 같을 때, y좌표도 같으면 y좌표 다시 생성하기. (중복 안되게)
*/