//nums.c
#include <stdio.h>
#include <limits.h> // �ִ� ��/�ּ� ���� �� ��

int main(void) {
	// char                       1����Ʈ       (����)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); // imit.h�� ���
	printf("Min: %d\n", CHAR_MIN);



	// signed short int           2����Ʈ       (����)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); // imit.h�� ���
	printf("Min: %d\n", SHRT_MIN);



	// unsigned short int         2����Ʈ       (����)
	unsigned short int usshort = 12345U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", USHRT_MAX); // imit.h�� ���



	// signed int                 4����Ʈ       (����)
	signed int sint = 12345;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); // imit.h�� ���
	printf("Min: %d\n", INT_MIN);

	// unsigned int               4����Ʈ       (����)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("value: %d\n", sint);
	printf("Max: %d\n", UINT_MAX); // imit.h�� ���

	// long�� �ٸ� �ü������ �ٸ� ũ���Դϴ�.
	// ���� 4����Ʈ�ε� Linus/Unix/Mac���� 8����Ʈ�Դϴ�.
	// Windows���� long long�ϸ� 8����Ʈ ����� �� �ִ�.

	// signed long int            4����Ʈ       (����)
	signed int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX); // imit.h�� ���
	printf("Min: %d\n", LONG_MIN);

	// unsigned long int          4����Ʈ       (�Ǽ�)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX); // imit.h�� ���

	// float  ( �׻� ��ȣ ����)   4����Ʈ       (�Ǽ�)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value:%f\n", f);
	//printf("MAX: %d\n", FLT_MAX);
	//printf("Min: %d\n", FLT_ MIN);


	// double ( �׻� ��ȣ  ����)  8����Ʈ       (�Ǽ�)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value:%.3f\n", d);
	//printf("MAX: %d\n", DBL_MAX);  // imit.h�� ���
	//printf("Min: %d\n", DBL_ MIN); // imit.h�� ���


	// signed double              8����Ʈ       (�Ǽ�)

	// unsigned doble             8����Ʈ       (�Ǽ�)

	return 0;
}