#include <stdio.h>

int main() {

	int ch;
	char message[100];
	int i = 0;
	while ((ch = getchar()) != '\n') {
		message[i++] = ch;
	}
	message[i] = '\0';
	printf("%s", message);
	return 0;
}

//���ڿ� ���ڿ��� ������� ���� �Լ��� ������ �����Ѵ�.
// ���� ���� �Է°� ��� �Լ��� �ִ�.
// stdio.h ������Ͽ��� 2���� �Լ��� �����Ѵ�.
// 1��° : int getchar(void); Ű���� ���� ���� 1���� �Է¹޾� ��ȯ
// 2��° : int putchar(int ch);  ch�� ���� ���ڸ� ȭ�鿡 ���, �ش� ���� ��ȯ
// getchar() : ����Ű �Է½� �����Ѵ�. 