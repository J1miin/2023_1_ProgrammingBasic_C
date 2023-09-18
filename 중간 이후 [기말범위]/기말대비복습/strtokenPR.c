#include <stdio.h>
int main()
{   
    char nameArr[3][9]={"MINT","SUNPINE","SEENA"};
    for (int i=0;i<3;++i){
        printf("%s \n",nameArr[i]); //열을 고려할 필요가 없다. 문자열 한 줄을 출력할거니까!
    }
    printf("한 문자씩 출력하기 \n");
    for(int i=0;i<1;++i){
        for (int j=0;j<4;++j){
            printf("%c \n",nameArr[i][j]);
        }
    }
    return 0;
}