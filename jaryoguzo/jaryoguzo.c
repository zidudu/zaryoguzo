#include "addPoly.h"
#include <stdio.h>
int main() {
	polynomial A = { 3,{4,3,5,0} }; //다항식 A 초기화
	polynomial B = { 4,{3,1,0,2,1} }; //다항식 B 초기화
	polynomial C; // 다항식 C 생성

	C = addPoly(A, B); //다항식 A와 B를 덧셈 연산하여 나온 다항식 C의 객체를 C에 넣음
	printf("\n A(x) ="); printPoly(A); //출력 함수 호출해 다항식 A의 식 표현
	printf("\n B(x) ="); printPoly(B); //출력 함수 호출해 다항식 B의 식 표현
	printf("\n C(x) ="); printPoly(C); //출력 함수 호출해 다항식 C의 식 표현


}