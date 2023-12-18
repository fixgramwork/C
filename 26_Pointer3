#include <stdio.h>

int main() {
	int a = 20;
	float b = 1.2f;

	int* pa = &a;
	float* pb = &b;

	pa = (int*)&b; // float* -> int*
	printf("*pa = %f\n", *pa);

	pb = (float*)&a; // int* -> float*
	printf("*pb = %d\n", *pb);

	pb = (float*)pa;   // int* -> float*
	printf("*pb = %f\n", *pb);

	return 0;
}
