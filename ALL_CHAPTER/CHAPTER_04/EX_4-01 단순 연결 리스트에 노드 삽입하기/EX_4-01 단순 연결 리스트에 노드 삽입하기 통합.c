#pragma once
// 단순 연결 리스트의 노드 구조를 구조체로 정의
typedef struct listNode {
    char data[4];
    struct listNode* link;
} listNode;

// 리스트 시작을 나타내는 head 노드를 구조체로 정의
typedef struct {
    listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void); // 공백 연결 리스트 생성
void freeLinkedList_h(linkedList_h* L); // 연결 리스트 해제
void printList(linkedList_h* L); // 연결 리스트 출력
void insertFirstNode(linkedList_h* L, char* x); // 연결리스트에 노드를 첫번째에 삽입
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x); // 연결리스트에 노드를 중간에 삽입
void insertLastNode(linkedList_h* L, char* x); // 연결리스트에 노드를 마지막에 삽입

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "InsertLinkedList.h"

#ifdef _WIN32
#define snprintf snprintf_s
#endif

#define __USE_MINGW_ANSI_STDIO 1

// 공백 연결 리스트를 생성하는 연산
linkedList_h* createLinkedList_h(void) {
    linkedList_h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h));
    L->head = NULL; // 공백 리스트라서 NULL로 초기화
    return L;
}

// 연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(linkedList_h* L) {
    listNode* p;
    while (L->head != NULL) {
        p = L->head;
        L->head = L->head->link;
        free(p);
        p = NULL;
    }
}

// 연결 리스트를 순서대로 출력하는 연산
void printList(linkedList_h* L) {
    listNode* p;
    printf("L = (");
    p = L->head;
    while (p != NULL) {
        printf("%s", p->data);
        p = p->link;
        if (p != NULL) printf(", ");
    }
    printf(") \n");
}

// 첫 번째 노드로 삽입하는 연산
void insertFirstNode(linkedList_h* L, char* x) {
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    snprintf(newNode->data, sizeof(newNode->data), "%s", x);
    newNode->link = L->head;
    L->head = newNode;
}

// 노드를 pre 뒤에 삽입하는 연산
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    snprintf(newNode->data, sizeof(newNode->data), "%s", x);
    if (L->head == NULL) {
        newNode->link = NULL;
        L->head = newNode;
    } else if (pre == NULL) {
        newNode->link = L->head;
        L->head = newNode;
    } else {
        newNode->link = pre->link;
        pre->link = newNode;
    }
}

// 마지막 노드로 삽입하는 연산
void insertLastNode(linkedList_h* L, char* x) {
    listNode* newNode;
    listNode* temp = NULL;
    newNode = (listNode*)malloc(sizeof(listNode));
    snprintf(newNode->data, sizeof(newNode->data), "%s", x);
    newNode->link = NULL;
    if (L->head == NULL) {
        L->head = newNode;
        return;
    }
    temp = L->head;
    while (temp->link != NULL) temp = temp->link;
    temp->link = newNode;
}

int main(void) {
    linkedList_h* L;
    L = createLinkedList_h();
    printf("(1) 공백 리스트 생성하기! \n");
    printList(L);

    printf("\n(2) 리스트에 [수] 노드 삽입하기! \n");
    insertFirstNode(L, "수");
    printList(L);

    printf("\n(3) 리스트 마지막에 [금] 노드 삽입하기! \n");
    insertLastNode(L, "금");
    printList(L);

    printf("\n(4) 리스트 첫번째에 [월] 노드 삽입하기! \n");
    insertFirstNode(L, "월");
    printList(L);

    printf("\n(5) 리스트 공간을 해제하여 공백 리스트로 만들기! \n");
    freeLinkedList_h(L);
    printList(L);

    return 0;
}
