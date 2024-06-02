#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdlib.h>
#include "listlink.h"


//공백 연결 리스트 생성
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}
//연결 리스트 전체 메모리 해제
void freeLinkedList_h(linkedList_h* L) {
	//head 구조체 p 생성
	listNode* p;
	//L이 가리키는 head가 NULL이 아닐때 반복
	while (L->head != NULL)
	{
		//p는 L의 head를 지정
		p = L->head;
		L->head = L->head->link; //메모리를 해제한 후에도 다음 노드의 위치를 알고 있어 연결을 유지할 수 있습니다.
		free(p);
		p = NULL;
	}
}
//연결 리스트 순서대로 출력
void printList(linkedList_h* L) {
	listNode* p;
	printf("L= (");
	p = L->head;
	while (p != NULL){ //head가 가리키는 노드가 있을때
		printf("%s", p->data); //출력
		p = p->link;
		if (p != NULL)printf(", "); //p가 가리키는 링크필드가 null이 아닐때는 ,를 붙여서 노드 데이터필드값 구별
	}
	printf(") \n");
}
// 첫번째 노드로 삽입하는연산
void insertFirstNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode)); //삽입 새 노드



	//newNode=(listNode*)malloc(sizeof(listNode));
	//데이터 복사
	strcpy(newNode->data, x);
	//new 주소
	newNode->link = L->head;
	L->head = newNode;
}
//노드 pre 뒤에 삽입연산
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode)); //삽입 새 노드
	strcpy(newNode->data, x); //복사
	if (L->head == NULL) {newNode->link = NULL;L->head = newNode;} //노드 없을 경우:newnode는 마지막 노드가 되서 newnode링크필드엔 null
	//L->head는 newNode 주소 가리킴
	else if (pre == NULL) {newNode->link = L->head;L->head = newNode;}//이전 노드 뒤에 노드가 없는 경우: newnode링크필드는 L->head가 가리키는 
	else {newNode->link = pre->link;pre->link = newNode;}
}
//마지막 노드로 삽입
void insertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L->head == NULL) {L->head = newNode; return;}
	//현재 리스트가 공백이 아닌 경우
	temp = L->head;
	while (temp->link != NULL)temp = temp->link; //현재 리스트의 마지막 노드를 찾음
	temp->link = newNode; //새 노드를 마지막 노드의 다음 노드로 연결
	
}


listNode* FindNode(linkedList_h* L, char* x) {
	listNode* temp = L->head;
	// 리스트를 순회하면서 원하는 데이터를 포함하는 노드 검색
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) {  // 문자열 비교를 위해 strcmp 사용
			return temp; // 데이터가 일치하는 노드의 포인터 반환
		}
		temp = temp->link; // 다음 노드로 이동
	}
	return NULL; // 일치하는 노드를 찾지 못했을 경우 NULL 반환
}