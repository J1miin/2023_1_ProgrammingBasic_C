#include <stdio.h>
int main(){
    int iStart, iLoopTo9, i, j, iRes, k;

    int iDan;

    int iRow;       // 한 행에 출력되는 단의 수

    int iBlockCnt;  // 출력되는 Block의 수

    int bRemain;    // 추가블럭의 필요성 여부 



    printf("한 라인에 출력될 단의 수 입력 : ");

    scanf("%d", &iRow);

    printf("출력할 단의 수 입력 : ");

    scanf("%d", &iDan);



    iBlockCnt = (iDan / iRow);

    bRemain = (iDan % iRow);

    if (bRemain > 0) {

        iBlockCnt = iBlockCnt + 1; 

    }



    for (k = 0; k < iBlockCnt; ++k) {

        for (j = 0; j < 9; ++j) {

            iLoopTo9 = j + 1;

            for (int i = 0; i < iRow; ++i) {

                iStart = k * iRow + i + 1;

                if (iStart > iDan) {

                    break;

                }

                iRes = iStart * iLoopTo9;

                printf("%2d x %2d = %2d\t", iStart, iLoopTo9, iRes);

            }

            printf("\n");

        }

        iRes = 15 * iRow;

        for (i = 0; i < iRes; ++i) {

            printf("=");

        }

        printf("\n");

    }
    return 0;
}