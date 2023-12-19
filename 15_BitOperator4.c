#include <stdio.h>

int main() {
	unsigned char a = 2;
	unsigned char b = 2;
	unsigned char ret = 0;


	ret = a - b;

	// 보수연산

	// 0000 0010   : 2
	// 1111 1101    : 1의 보수
	// 1111 1110    : -2


	//   0000 0010 : 2
	//   1111 1110 : -2
	//   0000 0000


	// 3 - 2 = 3 + (-2)

	//  00000011 (3)
	//  11111110 (-2)
	//1 00000001 (1)  

	return 0;
}
