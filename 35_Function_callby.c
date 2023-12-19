#include <stdio.h>
// 함수의 인자전달방식
// 1. call by value(값에의한 호출)
// 2. call by address(주소값에 의한 호출)

void Swap(int a, int b) {
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}

void PSwap(int* pa, int* pb) {
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int a = 20;
	int b = 30;

	printf("before Swap a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("After Swap a = %d, b = %d\n", a, b);

	printf("before PSwap a = %d, b = %d\n",a,b);
	PSwap(&a, &b);
	printf("After PSwap a = %d, b = %d\n", a, b);

	return 0;
}
