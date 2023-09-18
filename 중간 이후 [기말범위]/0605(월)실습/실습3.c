//3차원 2차원 배열 모두 구현해서 3-1. 3-2로 제출할 것

#include <stdio.h>
#include <string.h>

char * findWord(input[]);
void translate(char*pSour, char*pDest);
char dic [5][2][20]={
        {"우리","we"},
        {"좋아한다","like"},
        {"프로그램","program"},
        {"나","i"},
        {"즐긴다","enjoy"};
    };

int main(){
    
    char input[128]={0};
    char output[256]={0};
    while (1){
        printf("한글을 입력하세요: \n =>");
        //gets_s(input,sizeof(input));
        input = "우리"
        if (strcmp(input,"quit")==0){
            break;
        }
        translate(input,output);
        if (strcmp(output,"empty")==0){
            printf("=>사전에 없는 단어입니다. \n");
        }else{
            printf("=>%s \n",output);
        }
    }
    return 0;
}
char *findWord(input[]){
    for (int i=0; i<5;++i){
        if(strcmp(dic[i][0],input)==0){
            return dic[i][1];
        }
    }
    char rt[10]="empty";
    return rt;
}

void translate(char *pSour, char *pDest){
    int len = strlen(pSour);
    char *pKor = pSour;
    char *pEng = pDest;
    strcpy(pEng,sizeof(pEng),findWord(pKor));
}