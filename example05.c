#include <stdio.h>

int main(void) { // 우리 눈엔 안보이지만 운영체제로 값을 넘겨줌. 내가 어떤 값을 반환을 하더라도 운영체제는 관심이 없음
	// 포인터(pointer)
	//: 어느 메모리 주소 공간을 가리킴
	int a = 10;
	printf("a의 주소 : %p\n", &a); //주소 연산자 &
	return 0;
}