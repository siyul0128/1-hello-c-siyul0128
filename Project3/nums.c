//nums.c
#include <stdio.h>
#include <limits.h> // 최대 값/최소 값을 볼 때

int main(void) {
	// char                       1바이트       (문자)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); // imit.h의 상수
	printf("Min: %d\n", CHAR_MIN);



	// signed short int           2바이트       (정수)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); // imit.h의 상수
	printf("Min: %d\n", SHRT_MIN);



	// unsigned short int         2바이트       (정수)
	unsigned short int usshort = 12345U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", USHRT_MAX); // imit.h의 상수



	// signed int                 4바이트       (정수)
	signed int sint = 12345;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); // imit.h의 상수
	printf("Min: %d\n", INT_MIN);

	// unsigned int               4바이트       (정수)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("value: %d\n", sint);
	printf("Max: %d\n", UINT_MAX); // imit.h의 상수

	// long은 다른 운영체제에서 다른 크기입니다.
	// 보통 4바이트인데 Linus/Unix/Mac에서 8바이트입니다.
	// Windows에서 long long하면 8바이트 사용할 수 있다.

	// signed long int            4바이트       (정수)
	signed int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX); // imit.h의 상수
	printf("Min: %d\n", LONG_MIN);

	// unsigned long int          4바이트       (실수)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX); // imit.h의 상수

	// float  ( 항상 부호 있음)   4바이트       (실수)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value:%f\n", f);
	//printf("MAX: %d\n", FLT_MAX);
	//printf("Min: %d\n", FLT_ MIN);


	// double ( 항상 부호  있음)  8바이트       (실수)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value:%.3f\n", d);
	//printf("MAX: %d\n", DBL_MAX);  // imit.h의 상수
	//printf("Min: %d\n", DBL_ MIN); // imit.h의 상수


	// signed double              8바이트       (실수)

	// unsigned doble             8바이트       (실수)

	return 0;
}