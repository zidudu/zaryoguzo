#pragma once
//단순 연결 리스트의 노드 구조를 구조체로 정의
typedef struct listNode {
	char data[4];
	struct ListNode* link;
} listNode;

//리스트 시작을 나타내는 head 노드를 구조체로 정의
typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void); //공백 연결 리스트 생성
void freeLinkedList_h(linkedList_h* L); //연결 리스트 해제
void printList(linkedList_h* L); //연결 리스트 출력
void insertFirstNode(linkedList_h* L, char* x); //연결리스트에 노드를 첫번째에 삽입
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x); //연결리스트에 노드를 중간에 삽입
void insertLastNode(linkedList_h* L, char* x); //연결리스트에 노드를 마지막에 삽입


