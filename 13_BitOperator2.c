#include <stdio.h>

int main() {
	unsigned char a = 1;   // a: 00000001

	a = a << 1;  // 왼쪽 shift, x 2
	// a     :    00000001
	// a << 1:    00000010  
	pritnf("a = %d\n", a);

	a = a << 2;   // x 4
	// a     :    00000010
	// a << 2:    00001000
	printf("a = %d\n", a);

	a = a >> 1;   // 오른쪽 shift  / 2
	//     a  :   00001000
	//  a >> 1:   00000100
	printf("a = %d\n", a);

	a = a >> 2;   // 오른쪽shft  / 4
	//  a     : 000000100
	// a >> 2 : 000000001
	printf("a = %d\n", a);


	return 0;
}
