#include <stdio.h>
// 포인터


int main() {
	int a; // 변수는 나중에 할당받을 메모리 공간을 대신
	// 하고 있습니다.

	a = 20;

	&a; // &주소연산자 : 변수명앞에 사용하고 변수의 메모리 주소값을 반환함
	printf("&a = %p\n",&a);

	// c/c++ 언어에는 메모리 공간상에 주소값을 저장하는 데이타 타입을
// 가지고 있습니다. 이것을 포인터형이라고 합니다.

	int* pa; // 포인터형 지정자


	pa = &a; //int* int형 값의 주소값

	int** ppa;

	ppa = &pa; //int*** int형 값의 주소값을 저장하는 값에 주소값

	int*** pppa; // 주소값앞에 사용하는 *(asterisk)는 포인터 연산자

	pppa = &ppa; //int**** int형 값의 주소값을 저장하는 값에 주소값을 저장하는  값에 주소값

	*pppa; //주소값앞에 사용하는 *(asterisk)는 포인터 연산자 --> &ppa 
	//pppa가 가지고 있는 변수 안에 있는 값을 사용한다는 뜻.
	*&ppa;//ppa주소값에 할당 받은 공간을 뜻함.
	*ppa;//&pa변수의 주소값
	*&pa;//변수 pa
	*pa;//가 가지고 있는 값 &a
	*&a;//가 가지고 있는 값 20
	a;

	***pppa = 2000;

	printf("&***pppa = %p, &***&ppa = %p, &**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p",
		&***pppa, &***&ppa, &**ppa, &**&pa, &*pa, &*&a, &a);

	printf("***pppa = %d, ***&ppa = %d, **ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d",
		***pppa, ***&ppa, **ppa, **&pa, *pa, *&a, a);


	return 0;

}
