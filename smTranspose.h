#pragma once
typedef struct { //행렬 원소를 저장하기 위한 구조체 term 정의
	int row; //행
	int col; //열
	int value; //행과 열에 있는 값

} term; //객체 이름

void smTranspose(term a[], term b[]); //멤버함수 선언
