#include <stdio.h>
int main() {
    int input;
    int count;
    count = 0;
    scanf("%d",&input);
    while (1){
        input = input / 2;
        count+=1;
        if (input==1){
            break;
        }
    }
    printf("공식을 만족하는 k의 최댓값은 %d입니다. \n",count);

    return 0;
}