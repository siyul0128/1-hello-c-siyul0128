// cypher.c
#include <stdio.h>
#include <string.h>

void cypher(char* msg, int sft) {
	char ch;
	int i;

	for (i = 0; msg[i] != '\0'; ++i) {
		ch = msg[i];
		// ��ȣ (�빮��)
		if (ch > 'a' && ch <= 'z') {
			ch = ch + sft;

			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			else if (ch < 'a') {
				ch = ch + 'z' - 'a' + 1;
			}

			msg[i] = ch;
		}

		// ��ȣ (�ҹ���)

	}


}

int main(void) {
	//����ڿ��� �޽����� �޴�.
	char message[100];
	printf("Enter a message: ");
	fgets(message, sizeof(message), stdin);

	// ��ȣ �� �ֱ� ( ���ڸ� �� ���� �̵��ϱ�? )
	int shift;
	printf("Enter shift value: ");
	scanf_s("%d", &shift);

	// ��ȣ�� �����ϱ�
	cypher(message, shift);

	// ��ȣ�� �޽����� ����ϱ�
	printf("Encrypted! %s", message);

	return 0;
}