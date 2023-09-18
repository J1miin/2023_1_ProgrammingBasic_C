#define TRUE 1 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int RandomNum; 
    srand(time(0)); 
    int iInput;
    int istart, iend;
    int cnt;
    cnt=1;
    
    istart = 1;
    iend = 100;
    RandomNum = (rand() % iend) + istart;
    

    printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다\n");
    printf("하나의 숫자를 생각하세요.\n");
    printf("컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1라고 하세요.\n");
    printf("컴퓨터가 숫자를 맞히면 0이라고 하세요.\n");
    
    
    while (TRUE) {
        printf("숫자가 %d 인가요?", RandomNum);
        scanf("%d", &iInput);
        if (iInput == 0) {
            printf("당신이 생각한 숫자는 %d 입니다! \n", RandomNum);
            printf("컴퓨터가 %d번만에 맞췄습니다.\n",cnt);
            break;
        }
        else if (iInput == 1) {
            iend = RandomNum - 1;
            RandomNum = (rand() % (iend-istart+1)) + istart;
            cnt=cnt+1;

        }
        else if (iInput == -1) {
            istart = RandomNum + 1;
            RandomNum = (rand()%(iend-istart+1))+istart;
            cnt+=1;
        }else {
            printf("-1, 1, 0 사이의 숫자로 입력해주세요\n");
        }
    }
    return 0;
}

//3�� �׳� �״�� ���� ����, �����ϰ� �ּ�ó���� �ؼ� ���� �������ֱ�
// ���� �ߴ��ſ� �ص� �ǰ�, ������ �信 �����ϼŵ� �ǰ�
// ī�� ų�� �����Ŵٰ� ��