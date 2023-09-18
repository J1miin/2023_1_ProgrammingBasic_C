#include <stdio.h>
int main() {
	char cSelectmenu;
	int iInput1, iInput2;
	int iResult;

	while (1) {
		printf("*****\n");
		printf("A---- Add\n");
		printf("S---- Subtract\n");
		printf("M---- Multiply\n");
		printf("D---- Divide\n");
		printf("Q---- Quit\n");
		printf("*****\n");
		printf("연산을 선택하시오:");
		scanf(" %c", &cSelectmenu);

		if (cSelectmenu == 'A') {
			printf("두 수를 공백으로 분리하여 입력하시오:");
			scanf("%d %d", &iInput1, &iInput2);
			iResult = iInput1 + iInput2;
			printf("%d\n",iResult);
		}
		else if (cSelectmenu == 'S') {
			printf("두 수를 공백으로 분리하여 입력하시오:");
			scanf("%d %d", &iInput1, &iInput2);
			iResult = iInput1 - iInput2;
			printf("%d\n", iResult);
		}
		else if (cSelectmenu == 'M') {
			printf("두 수를 공백으로 분리하여 입력하시오:");
			scanf("%d %d", &iInput1, &iInput2);
			iResult = iInput1 * iInput2;
			printf("%d\n", iResult);
		}
		else if (cSelectmenu == 'D') {
			printf("두 수를 공백으로 분리하여 입력하시오:");
			scanf("%d %d", &iInput1, &iInput2);
			if (iInput2 == 0) {
				printf("0으로 나눌 수 없습니다.\n");
			}
			else {
				iResult = iInput1 / iInput2;
				printf("%d\n", iResult);
			}
		}
		else if (cSelectmenu == 'Q') {
			break;
		}
		else {
			printf("연산을 선택하시오\n");
		}

	}

	return 0;
}