#define TRUE 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int iRandomNo ;
    srand(time(0));
    iRandomNo= (rand() % 100)+1;
    
    
    return 0;
}


//컴퓨터가 내가 입력한 수를 찾게 하는 방법도 만들어보기 