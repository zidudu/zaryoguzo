
#include <iostream>
#include <stdio.h>
// 71p int a[5]={1,2,3} 이러면 나머지 인덱스에는 기본값 0이 할당됨
//int a[5]={1,2,3,4,5,6} 이러면 5까지는 배열 요소에 할당되지만 나머지 초깃값은 메모리에는 할당되지만 사용할 수 없는 값이됨
//  

using namespace std;
int main(){ 
	int i;
	//1차원 배열 초기화
	int score[3] = { 91,86,97 };
	char grade[3] = { 'a','b','a' };

	printf("\n *** 학년별 취득 학점 *** \n\n");

	for (i = 0; i < 3; i++) {
		//%c는 캐릭터형 자료를 출력하기 위해 사용하는 format 
		//%3d는 숫자의 크기와 관계없이 3자리의 공간을 할당함
		printf("%3d학년 : 총점 =%d, 등급 = %c\n", i + 1, score[i], grade[i]);

	}

}

