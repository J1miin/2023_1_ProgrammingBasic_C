//배열 입력 함수
//배열 출력 함수
// swap 함수

#include <stdio.h>
void getArr(int iArray[]); //함수를 선언한다. by 함수원형 (반환타입, 이름, 매개변수 타입리스트)
void printArr(int iArray[]);
void sort_Array(int iArray[]);
void swap_int(int iArray[],int iFix, int iMinIndex);

int main(){
    int iArray[10];
    getArr(iArray); //배열을 통쨰로 전달하려면, 배열의 주소를 보내야하고, 배열의 주소는 배열의 이름이다! 
    //함수를 호출한다. -> 호출 받는 함수를 작성한다. 
    printArr(iArray);
    sort_Array(iArray);
    printArr(iArray);
    return 0;
}


void getArr(int iArray[]){ //함수를 정의한다. iArray[10] 이러면 10번째 인덱스를 받겟다는 뜻이므로 존재하지 않는 위험한 코드임.ㅇㅇ
//int * iArray로 받는 것도 동일하다. 
    int i;
    for (int i=0;i<10;++i){
        printf("input integer");
        scanf("%d", &iArray[i]); //iArray[i]는 일반 변수이므로 & 붙여야한다.

    }

}
void printArr(int iArray[]){ 
    int i;
    for (int i=0;i<10;++i){
        printf("%d", iArray[i]); //iArray[i]는 일반 변수이므로 & 붙여야한다.
    }
}
void sort_Array(int iArray[]){
    int iMin, iMinIndex;
    int iTmp;

    for (int j=0; j<10;++j){
        iMin=iArray[j];
        iMinIndex=j;
        for (int i=j;i<10;++i){
            if (iMin>iArray[i]){
                iMinIndex=i;
                iMin=iArray[i];
            }
        }
        swap_int(iArray,j,iMinIndex); //중요
        //swap_int(iArray,j(최소값이 놓여야할 위치),iMinIndex);
        /*
        iTmp=iArray[j];
        iArray[j]=iArray[iMinIndex];
        iArray[iMinIndex]=iTmp;
        */
    }

}

void swap_int(int iArray[],int iFix, int iMinIndex){
    int iTmp;
    iTmp=iArray[iFix];
    iArray[iFix]=iArray[iMinIndex];
    iArray[iMinIndex]=iTmp;
}