#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int iInput;
	int iSum = 0;
	int i = 0;

	while (i<3) {
		printf("숫자를 입력하세요:");
		scanf_s("%d", &iInput);
		if (iInput < 0) {
			continue; //아래 무시하고 다시 조건 확인하러 돌아감
		}
		iSum = iSum + iInput;
		i += 1;

	}
	printf("합계는 %d 입니다.", iSum);
	return 0;
}