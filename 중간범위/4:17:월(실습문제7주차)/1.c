#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int iInput;
	int iSum = 0;
	int i = 0;

	while (i<3) {
		printf("���ڸ� �Է��ϼ���:");
		scanf_s("%d", &iInput);
		if (iInput < 0) {
			continue; //�Ʒ� �����ϰ� �ٽ� ���� Ȯ���Ϸ� ���ư�
		}
		iSum = iSum + iInput;
		i += 1;

	}
	printf("�հ�� %d �Դϴ�.", iSum);
	return 0;
}