#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int);

void main() {
	int n, result;
	printf("\n 정수를 입력하세요 : ");
	scanf("%d", &n);
	result = fact(n);
	printf("\n\n %d의 팩토리얼 값은 %ld입니다.\n", n, result);
	getchar(); getchar();
}

long int  fact(int n) {
	int value;
	if (n <= 1) {
		printf("\n fact(1) 호출!");
		printf("\n fact(1) 값 1 반환!");
		return 1;
	}
	else {
		printf("\n fact(%d) 호출!", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) 값 %ld 반환!", n, value);
		return value;
	}
}
/*
정수를 입력하세요 : 4

 fact(4) 호출!
 fact(3) 호출!
 fact(2) 호출!
 fact(1) 호출!
 fact(1) 값 1 반환!
 fact(2) 값 2 반환!
 fact(3) 값 6 반환!
 fact(4) 값 24 반환!

 4의 팩토리얼 값은 24입니다.

 => 이건 바로 스택 형식이다.
*/
