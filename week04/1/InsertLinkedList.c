#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include "InsertLinkedList.h"

// 공백 연결 리스트 생성 연산  
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;
	return L;
}

// 연결 리스트의 전체 메모리 해제 연산
void freeLinkedList_h(linkedList_h* L) {
	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}

//연결 리스트 순서대로 출력 연산
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
    newNode = (listNode*)malloc(sizeof(listNode)); // 삽입할 새 노드 할당
    strcpy(newNode->data, x);                      // 새 노드의 데이터 필드에 x 저장
    newNode->link = L->head;                       // 새 노드의 링크 필드에 현재 첫 번째 노드 주소 저장
    L->head = newNode;                             // 리스트의 시작 포인터(head)를 새 노드로 변경
}

// 노드를 pre 뒤에 삽입하는 연산
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode)); // 삽입할 새 노드 할당
    strcpy(newNode->data, x);                      // 새 노드의 데이터 필드에 x 저장
    
    if (L->head == NULL) {                         // 공백 리스트인 경우
        newNode->link = NULL;                      // 새 노드를 첫 번째이자 마지막 노드로 연결
        L->head = newNode;
    }
    else if (pre == NULL) {                        // 삽입 위치를 지정하는 포인터 pre가 NULL인 경우
        newNode->link = L->head;
        L->head = newNode;                         // 새 노드를 첫 번째 노드로 삽입
    }
    else {
        newNode->link = pre->link;                 // 포인터 pre의 노드 뒤에 새 노드 연결
        pre->link = newNode;
    }
}

// 마지막 노드로 삽입하는 연산
void insertLastNode(linkedList_h* L, char* x) {
    listNode* newNode;
    listNode* temp;
    newNode = (listNode*)malloc(sizeof(listNode)); // 삽입할 새 노드 할당
    strcpy(newNode->data, x);                      // 새 노드의 데이터 필드에 x 저장
    newNode->link = NULL;                          // 새 노드의 링크 필드를 NULL로 설정
    
    if (L->head == NULL) {                         // 현재 리스트가 공백인 경우
        L->head = newNode;                         // 새 노드를 리스트의 시작 노드로 연결
        return;
    }
    
    // 현재 리스트가 공백이 아닌 경우
    temp = L->head;
    while (temp->link != NULL) {                   // 현재 리스트의 마지막 노드를 찾음
        temp = temp->link;
    }
    temp->link = newNode;                          // 새 노드를 마지막 노드(temp)의 다음 노드로 연결
}