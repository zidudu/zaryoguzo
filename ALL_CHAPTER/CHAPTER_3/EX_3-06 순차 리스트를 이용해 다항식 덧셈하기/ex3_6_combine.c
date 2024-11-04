#pragma once
#define MAX(a, b) ((a > b) ? a : b)
#define MAX_DEGREE 50

#include <stdio.h>

// 다항식 구조체 정의
typedef struct {
    int degree; // 다항식 차수
    float coef[MAX_DEGREE]; // 항 계수 저장 배열
} polynomial;

// 두 다항식 덧셈 함수 선언
polynomial addPoly(polynomial A, polynomial B);

// 다항식 출력 함수 선언
void printPoly(polynomial P);

// 두 다항식 덧셈 함수 구현
polynomial addPoly(polynomial A, polynomial B) {
    polynomial C;
    int A_index = 0, B_index = 0, C_index = 0; // 배열 요소 변수
    int A_degree = A.degree, B_degree = B.degree; // 최대 차수 변수
    C.degree = MAX(A.degree, B.degree); // C의 최대 차수는 A와 B 중 큰 값

    while (A_index <= A.degree && B_index <= B.degree) {
        // A의 최대 차수가 B의 최대 차수보다 클 때
        if (A_degree > B_degree) {
            C.coef[C_index++] = A.coef[A_index++]; // A의 계수를 C에 추가
            A_degree--; // A의 차수 감소
        }
        // A의 최대 차수와 B의 최대 차수가 같을 때
        else if (A_degree == B_degree) {
            C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++]; // 두 항의 계수를 더해 C에 추가
            A_degree--;
            B_degree--;
        }
        // B의 최대 차수가 A의 최대 차수보다 클 때
        else {
            C.coef[C_index++] = B.coef[B_index++]; // B의 계수를 C에 추가
            B_degree--;
        }
    }
    return C; // 덧셈 결과 반환
}

// 다항식 출력 함수 구현
void printPoly(polynomial P) {
    int i, degree;
    degree = P.degree; // 최대 차수

    for (i = 0; i <= P.degree; i++) {
        printf("%3.0fx^%d", P.coef[i], degree--); // 항 출력
        if (i < P.degree) printf(" +"); // 중간에 + 기호 추가
    }
    printf("\n"); // 줄바꿈
}

int main() {
    polynomial A = { 3, {4, 3, 5, 0} }; // 다항식 A 초기화
    polynomial B = { 4, {3, 1, 0, 2, 1} }; // 다항식 B 초기화
    polynomial C; // 다항식 C 생성

    C = addPoly(A, B); // 다항식 A와 B의 덧셈 결과를 C에 저장
    printf("\n A(x) = "); printPoly(A); // 다항식 A 출력
    printf("\n B(x) = "); printPoly(B); // 다항식 B 출력
    printf("\n C(x) = "); printPoly(C); // 다항식 C 출력

    return 0;
}
