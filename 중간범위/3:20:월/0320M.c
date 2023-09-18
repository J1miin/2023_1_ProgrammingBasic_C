#include <stdio.h>
/* 내가 쓴 코드 예제1
int main() {
    int Iinput;
    printf("16진수로 정수를 입력해주세요:");
    scanf("%x",&Iinput);
    printf("8진수로는 0%o 입니다 \n",Iinput);
    printf("10진수로는 %d 입니다 \n", Iinput);
    printf("16진수로는 0x%x 입니다",Iinput);

    printf("2번 예제 \n");
    printf("\"ASCII CODE\", \'A\', \'B\', \'C\' \n");
    printf("\\t \\a \\n \n");
}
 아래는 조교님 코드 */

int main() {
    int Iinput;
    printf("16진수로 정수를 입력해주세요:");
    scanf("%x",&Iinput);
    //%x가 16진수를 받는 입력 형식 %o 8진수 받는 입력 형식
    //scanf_s로 써서 오류를 방지해도 되고, define 그거 해두 됨
    printf("8진수로는 %#o 입니다 \n",Iinput);
    //#은 형태 맞춰주려고 쓰는 것임. 
    printf("10진수로는 %d 입니다 \n", Iinput);
    printf("16진수로는 %#x 입니다",Iinput);
}