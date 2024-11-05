#define _CRT_SECURE_NO_WARNINGS
#include <string.h> // 이 헤더파일에는 C 형식 문자열 (널 종료 문자열)을 다룰 수 있는 함수들을 포함하고 있다. (strcpy, strcat 등)
#include "InsertLinkedList.h"
#include <stdio.h>

#ifdef _WIN32
#define snprintf snprintf_s
#endif

#define __USE_MINGW_ANSI_STDIO 1

// 공백 연결 리스트를 생성하는 연산
linkedList_h* createLinkedList_h(void) { // 공백 연결 리스트 생성
    linkedList_h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h));
    L->head = NULL; // 공백 리스트라서 NULL로 초기화
    return L;
}

// 연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(linkedList_h* L) { // 연결 리스트 해제
    listNode* p;
    while (L->head != NULL) {
        // 헤드가 가리키는 첫 노드부터 p가 가리키고, L은 그 다음 노드를 가리켜서 p는 메모리를 해제한 후 그 다음 노드도 계속 없애간다
        // 이걸 L의 head가 NULL이 될 때까지 반복하여 전체 메모리를 해제한다.
        p = L->head;
        L->head = L->head->link;
        free(p);
        p = NULL;
    }
}

// 연결 리스트를 순서대로 출력하는 연산
void printList(linkedList_h* L) { // 연결 리스트 출력
    listNode* p;
    printf("L = (");
    p = L->head;
    // p가 null이 될 때까지 data를 출력함. p는 link를 통해 계속 이동함
    while (p != NULL) {
        // data 출력
        printf("%s", p->data);
        // p는 그 다음 노드로 이동
        p = p->link;
        // p가 이동한 후 null이면 ,를 달지 않게 함
        if (p != NULL) printf(", ");
    }
    printf(") \n");
}

// 첫 번째 노드로 삽입하는 연산
void insertFirstNode(linkedList_h* L, char* x) { // 연결리스트에 노드를 첫번째에 삽입
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode)); // 삽입할 새 노드 할당
    snprintf(newNode->data, sizeof(newNode->data), "%s", x); // 데이터 필드에 x값 저장
    newNode->link = L->head; // 새 노드의 링크 필드는 L의 헤드가 가리키는 노드를 가리키게 하여 이어지게 함
    L->head = newNode; // 새 노드를 L의 헤드가 가리키게 하여 첫번째 노드가 되도록 함
}

// 노드를 pre 뒤에 삽입하는 연산
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) { // 연결리스트에 노드를 중간에 삽입
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    snprintf(newNode->data, sizeof(newNode->data), "%s", x); // 데이터 필드에 x값 저장
    // 공백 리스트인 경우 새 노드를 첫 노드로 설정
    if (L->head == NULL) {
        newNode->link = NULL;
        L->head = newNode;
    }
    // 삽입 위치를 지정하는 포인터 pre가 NULL인 경우
    else if (pre == NULL) {
        newNode->link = L->head; // 새 노드를 첫번째 노드로 삽입(위치가 없으니 일단 첫번째로 한듯)
        L->head = newNode;
    }
    // 공백 리스트가 아니고, 삽입 위치 pre가 있다면 pre 뒤에 새 노드를 연결함
    else {
        newNode->link = pre->link; // 포인터 pre의 노드 뒤에 새 노드를 연결
        pre->link = newNode;
    }
}

// 마지막 노드로 삽입하는 연산
void insertLastNode(linkedList_h* L, char* x) { // 연결리스트에 노드를 마지막에 삽입
    listNode* newNode;
    listNode* temp = NULL;
    newNode = (listNode*)malloc(sizeof(listNode));
    snprintf(newNode->data, sizeof(newNode->data), "%s", x); // 데이터 필드에 x값 저장
    newNode->link = NULL;
    // 현재 리스트가 공백인 경우
    if (L->head == NULL) {
        L->head = newNode; // 새 노드를 리스트의 시작 노드로 연결
        return;
    }
    // 현재 리스트가 공백이 아닌 경우
    temp = L->head;
    while (temp->link != NULL) temp = temp->link; // 현재 리스트의 마지막 노드를 찾음
    temp->link = newNode; // 새 노드를 마지막 노드(temp)의 다음 노드로 연결
}
