#include <stdio.h>
//예제 2-11 포인터 배열과 포인터의 포인터 사용하기
int main() {
	// 포인터 배열과 이중 포인터
	const char* ptrArray[2]; // 포인터 배열 선언
	const char** ptrptr; // 이중 포인터 선언
	int i; // 반복문을 위한 변수 선언

	
	ptrArray[0] = "Korea"; // ptrArray[0]에 문자열 "Korea" 대입
	ptrArray[1] = "Seoul"; // ptrArray[1]에 문자열 "Seoul" 대입
	
	// ptrArray의 주소를 ptrptr에 대입
	ptrptr = ptrArray;
	
	// ptrArray[0]의 주소, 값, 참조값, 참조 문자열 출력
	printf("\n ptrArray[0]의 주소 (&ptrArray[0]) = %u", &ptrArray[0]);
	printf("\n ptrArray[0]의 값 (&ptrArray[1]) = %u", ptrArray[0]);
	printf("\n ptrArray[0]의 참조값 (&ptrArray[0]) = %c", *ptrArray[0]);
	printf("\n ptrArray[0]의 참조 문자열 (&ptrArray[0]) = %s \n", *ptrArray);

	// ptrArray[1]의 주소, 값, 참조값, 참조 문자열 출력
	printf("\n ptrArray[1]의 주소 (&ptrArray[1]) = %u", &ptrArray[1]);
	printf("\n ptrArray[1]의 값 (&ptrArray[1]) = %u", ptrArray[1]);
	printf("\n ptrArray[1]의 참조값 (&ptrArray[1]) = %c", *ptrArray[1]);
	printf("\n ptrArray[1]의 참조 문자열 (&ptrArray[1]) = %s \n", *(ptrArray +1));

	// ptrptr의 주소, 값, 참조값, 참조 문자열 출력
	printf("\n ptrptr의 주소 (&ptrptr) = %u", &ptrptr);
	printf("\n ptrptr의 값 (ptrptr) = %u", ptrptr);
	printf("\n ptrptr의 1차 참조값 (*ptrptr) = %u", *ptrptr);
	printf("\n ptrptr의 2차 참조값 (**ptrptr) = %c", **ptrptr);
	printf("\n ptrptr의 2차 참조 문자열 (**ptrptr) = %s \n", *ptrptr);

	// ptrArray[0]과 ptrptr의 값 출력
	printf("\n\n *ptrArray[0] : ");
	for (i = 0; i < 5; i++) {
		printf("%c", *(ptrArray[0]+i));
	}
	// ptrptr과 ptrArray[0]의 값 출력
	printf("\n **ptrptr : ");
	for (i = 0; i < 5; i++) {
		printf("%c", *(*ptrptr + i));
	}

	// ptrArray[1]과 ptrptr의 값 출력
	printf("\n\n *ptrArray[1] :");
	for (i = 0; i < 5; i++) {
		printf("%c", *(ptrArray[1] + i));
	}
	// ptrptr과 ptrArray[1]의 값 출력
	printf("\n **(ptrptr + 1) : ");
	for (i = 0; i < 5; i++) {
		printf("%c", *(*(ptrptr + 1) + i));
	}

	getchar();

	/*
	ptrArray[0]의 주소 (&ptrArray[0]) = 766506552
 ptrArray[0]의 값 (&ptrArray[1]) = 1288088836
 ptrArray[0]의 참조값 (&ptrArray[0]) = K
 ptrArray[0]의 참조 문자열 (&ptrArray[0]) = Korea

 ptrArray[1]의 주소 (&ptrArray[1]) = 766506560
 ptrArray[1]의 값 (&ptrArray[1]) = 1288088844
 ptrArray[1]의 참조값 (&ptrArray[1]) = S
 ptrArray[1]의 참조 문자열 (&ptrArray[1]) = Seoul

 ptrptr의 주소 (&ptrptr) = 766506600
 ptrptr의 값 (ptrptr) = 766506552
 ptrptr의 1차 참조값 (*ptrptr) = 1288088836
 ptrptr의 2차 참조값 (**ptrptr) = K
 ptrptr의 2차 참조 문자열 (**ptrptr) = Korea


 *ptrArray[0] : Korea
 **ptrptr : Korea

 *ptrArray[1] :Seoul
 **(ptrptr + 1) : Seoul
	
	*/


}
