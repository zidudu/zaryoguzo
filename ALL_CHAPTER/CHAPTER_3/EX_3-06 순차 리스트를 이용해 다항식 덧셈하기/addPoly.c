#include "addPoly.h"
polynomial addPoly(polynomial A, polynomial B) {
	polynomial C;
	int A_index = 0, B_index = 0, C_index = 0; //배열 요소 변수
	int A_degree = A.degree, B_degree = B.degree; //최대차수 변수
	C.degree = MAX(A.degree, B.degree); //c 지수에 a와 b중 큰 최대 차수 반환해 삽입

	while (A_index<=A.degree&&B_index<=B.degree) //유한성
	{
		// A의 최대차수가 B의 최대차수보다 클때
		if (A_degree > B_degree) {
			C.coef[C_index++] = A.coef[A_index++]; //인덱스 넣어지고 나서 증감됨
			A_degree--; //a의 차수 감소

		}
		// A의 최대차수와 B의 최대차수가 같을때
		else if (A_degree == B_degree) {
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++]; //두 항의 계수 더해서 C의 현재 항 계수로 저장함
			A_degree--;
			B_degree--;
		}
		// B의 최대차수가 A의 최대차수보다 클때
		else {
			C.coef[C_index++] = B.coef[B_index++]; //B의 현재 항 계수를 다항식 C의 현재 항의 계수로 저장함
			B_degree--;
		}
	}
	return C; //덧셈 결과인 C 반환

}
void printPoly(polynomial P) { // 출력 함수 선언
	int i, degree;
	degree = P.degree; //최대 차수 변수 생성
	

	for (i = 0; i <= P.degree; i++) {
		
			printf("%3.0fx^%d", P.coef[i], degree--); //지수 감소해 항의 지수가 순서대로 표현되게 함
			if (i < P.degree)printf(" +"); //i가 p의 차수보다 낮다면 중간중간 + 추가함, 최대항 개수는 지수의 +1이니 지수만큼 반복해 마지막은 +안붙임
	}
	printf("\n"); //줄바꿈

}
