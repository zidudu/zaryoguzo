#pragma once

//단순 연결 리스트 노드 구조 구조체로 정의
typedef struct ListNode {
    char data[4]; //데이터 
    struct ListNode* link; //링크
} listNode;
//리스트 시작 나타내는 head 노드
typedef struct {
    listNode* head;
}linkedList_h;

linkedList_h* createLinkedList_h(void); //연결 리스트 생성
void freeLinkedList_h(linkedList_h* L); //연결 리스트 해제
void printList(linkedList_h* L); // 연결 리스트 출력
void insertFirstNode(linkedList_h* L, char* x); //첫번째 노드에 삽입
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x); //중간 삽입
void insertLastNode(linkedList_h* L, char* x); //마지막 삽입

listNode* FindNode(linkedList_h* L, char* x);