#include <stdio.h>

int main() {
	// 비트연산자 : 비트단위로 연산을 하는 연산자
	// &(비트 And)
	// | (비트 Or)
	// ~(비트 not)
	// ^(배타적 Or, exclusive Or)
	// << (왼쪽 shift)
	// >> (오른쪽 shift)


	unsigned char a = 2;
	unsigned char b = 1;
	unsigned char ret = 0;

	ret = a & b;
	// a      : 00000010
	// b      : 00000001
	// a & b  : 00000000
	printf("a & b = %d\n", ret);

	ret = a | b;
	// a      : 00000010
	// b      : 00000001
	// a | b  : 00000011
	printf("a | b = %d\n", ret);

	ret = ~a;
	// a      : 00000010
	// ~a     : 11111101
	printf("~a = %d\n", ret);

	ret = a ^ b; // xor연산자는 두비트가 같으면 0이고 다른면명 1입니다.

	// a      : 00000010
	// b      : 00000001
	// a ^ b  : 00000011
	printf("a ^ b = %d\n", ret);

	return 0;
}
