#include <stdio.h>
int main() {
    int a, b;
    int i;
    scanf("%d %d",&a, &b);
    
    for (i=(a<b ? a:b); i>=2; i--){
        if (a%i==0 && b%i==0){
            printf("최대공약수 : %d \n",i);
            break;
        }

    }
// 아 소인수 분해가 아니라 그냥 한 번에 하나로 딱 나눠지는 애를 찾는 방식이구나. 
    return 0;
}