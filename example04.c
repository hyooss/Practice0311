#include <stdio.h>

//함수는 자기 자신의 영역(지역)이 존재
//데이터를 전달 받기 위해 매개변수(parameter) 정의해야됨

int get_area(int width,int height) { //main 안에 있는 width, height랑 이름만 같은거임. 같은 변수 아님~! 값을 넘길땐 자료형만 같게 하면 됨
	int area;
	area = width * height;
	// 결과를 main으로 되돌려줌
	return area;
}

void main(void) {
	//사각형 면적 구하기
	int width = 10;
	int height = 20;
	int area; //면적

	// 데이터(인수)를 함수로 전달
	// 함수 호출 후 다시 값을 돌려받음
	area=get_area(width, height);
	printf("사각형 면적 : %d\n", area);

}