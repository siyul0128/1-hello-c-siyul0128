// ascii.c
#include <stdio.h>

int main(void) {
	char x = 72;
	char y = 105;
	char z = 39;

	printf("ASCII %d+%d+%d = %c%c%c", x, y, z, x, y, z);

	char a = 'A';
	char b = a + 1;

	printf("\n%c+1 = %c", a, b);

	printf("\n\nASCII ���ڴ� ������� ����ϱ�:");
	for (int i = 85; i <= 105; i++) {
		printf("\nASCII: %d = %c", i, i);

	}

	printf("\n\n");

	return 0;

}