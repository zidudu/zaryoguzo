//3-2
#include <stdio.h>
#include "listS.h"
int main() {
	//원소 초기화 (max는 10)
	int list[MAX] = { 10,20,40,50,60,70 };
	//변수 초기화
	int i, move, size = 6; //size는 리스트에 있는 원소의 개수
	
	printf("\n삽입 전 선형 리스트: ");
	//리스트 출력
	for (i = 0; i < size; i++) printf("%3d ", list[i]);
	//원소 개수 출력
	printf("\n원소의 갯수 : %d \n", size);

	//30값 list에 삽입
	move = insertElement(list, size, 30); //배열, 원소 개수, 30값 삽입
	
	//삽입 후 리스트 출력
	printf("\n삽입 후 선형 리스트: ");
	for (i = 0; i <= size; i++) printf("%3d ", list[i]); //i <= size 에서 size가 증가되었으니 <=를 씀
	//원소 갯수 하나 증가해서 출력
	printf("\n원소의 갯수 : %d ", ++size);
	//자리 이동 횟수 출력
	printf("\n자리 이동 횟수 : %d \n", move);

	//30값 삭제
	move = deleteElement(list, size, 30);

	//삭제할 값의 원소가 없는 경우
	if (move == size) printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다 \n");
	//삭제할 원소가 있는 경우
	else {
		//삭제 후 리스트 출력
		printf("\n삭제 후 선형 리스트 : ");
		for (i = 0; i < size - 1; i++) printf("%3d ", list[i]); //i < size - 1는 위에서 ++size를 했기 때문에 size-1를 하고 <를 씀
		//사이즈 하나 감소시키고 출력
		printf("\n원소의 갯수 : %d ", --size);
		//자리 이동횟수 출력
		printf("\n자리 이동 횟수 : %d \n", move);
	}


	getchar(); return 0;

}
/*
삽입 전 선형 리스트:  10  20  40  50  60  70
원소의 갯수 : 6

삽입 후 선형 리스트:  10  20  30  40  50  60  70
원소의 갯수 : 7
자리 이동 횟수 : 4

삭제 후 선형 리스트 :  10  20  40  50  60  70
원소의 갯수 : 6
자리 이동 횟수 : 4
*/
