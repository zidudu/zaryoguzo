#include <iostream>
#include <stdio.h>
#include <iostream>
//문자 다차원 배열
// 문자 배열 역시 1차원의 문자 배열을 묶어서 다차원 배열로 구성할 수있다.
// char c[3][20];
//초기화 이용해 문자열 저장하거나 문자열 복사 함수인 strcpy()를 사용하여 문자열 저장할 수 있음
using namespace std;
int main(){ 

	//예제 2-7 3차원 배열 이용하여 문자 배열 입출력하기

	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++) {
		printf("\n 학생 %d의 이름 : ", i + 1);
		gets_s(student[i][0]); //면에 있는 1행 번호에 문자열을 저장
		printf("\n 학생 %d의 학과 : ", i + 1);
		gets_s(student[i][1]);//면에 있는 2행 번호에 문자열을 저장
		printf("\n 학생 %d의 학번 : ", i + 1);
		gets_s(student[i][2]);//면에 있는 3행 번호에 문자열을 저장
	}

	for (i = 0; i < 2; i++) { //2번 반복 //면 
		printf("\n\n 학생 %d", i + 1); // 학생 누구 출력
		for (j = 0; j < 3; j++) { //3번 반복  //행
			printf("\n\t"); //줄바꿈 // 탭 들여쓰기
			for (k = 0; student[i][j][k] != '\0'; k++) { //문자열들이 NULL이 아닐때 반복함 //열
				printf("%c", student[i][j][k]);
			}
		
		}	
	}

}
