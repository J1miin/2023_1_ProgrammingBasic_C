//구구단 일단 형태맞추기 (중간단계)
#include <stdio.h>
int main(){
    int i, iStart, iRes, j
    int line;
    int zStart;
    for (line=0;line<3;++line){
        istart=(iline+1)*3+1;

    }
    for (j=0;j<9;++j){
        zStart=j+1;

        for (i=0;i<3;++i){
            iStart=i+1;
            iRes=iStart * 1;
            
            printf("%2d x %2d = %2d \t", iStart,zStart,iRes);
        }
        printf("\n");
    } 
    printf("============================================");

    
    //printf("1 x 1 = 1 \t"); //1,2,3이 변하는 걸 보고 for문을 쓴다.
    // printf("2 x 1 = 2 \t");
    //printf("3 x 1 = 3 \t");
    return 0;
}

/*//구구단 
#include <stdio.h>
int main(){
    int iCol, iStart, iRes, iLoop,iRow,i;
    for (i=0;i<3;++i){
        for (iLoop=0;iLoop<9;++iLoop){
            iRow=iLoop+1;
        for (iCol=0;iCol<3;++iCol){
            iStart=iCol+1;
            iRes=iStart * 1;
            printf("%2d x %2d = %2d \t", iStart,iRow, iRes);
        }
        printf("\n");
    }
    printf("============================================\n");

    }
    
    
    //printf("1 x 1 = 1 \t"); //1,2,3이 변하는 걸 보고 for문을 쓴다.
    // printf("2 x 1 = 2 \t");
    //printf("3 x 1 = 3 \t");
    return 0;
}*/