#pragma once
#define MAX(a,b)((a>b)?a:b)
#define MAX_DEGREE 50

//	//1.두 다항식 최대차수와 항 계수 배열값 초기화

	typedef struct { //행렬 원소를 저장하기 위한 구조체 term 정의
	int degree; //다항식 차수
	float coef[MAX_DEGREE]; //항 계수 저장 배열

} polynomial; //클래스 이름
	//2.두 다항식 연산 후 다항식 C에 삽입
	polynomial addPoly(polynomial A,polynomial B); //두 다항식 연산 멤버함수 선언
	//3.두 다항식 덧셈한 다항식 출력
	void printPoly(polynomial P); // 출력 함수 선언

	//알고리즘 추상화
	//1.두 다항식 최대차수와 항 계수 배열값 초기화
	//2.두 다항식 연산 후 다항식 C에 삽입
	//3.두 다항식 덧셈한 다항식 출력

