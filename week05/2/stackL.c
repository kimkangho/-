#include <stdlib.h>
#include "stackL.h"

// 스택이 공백 상태인지 확인
int isStackEmpty() {
	if (top == NULL)
		return 1;
	else
		return 0;
}

// 스택 top에 원소 삽입
void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));

	temp->data = item;
	temp->link = top;		// 삽입 노드 top 위에 연결
	top = temp;				// top 위치를 삽입 노드로 이동
}

// 스택의 top에서 원소 삭제
element pop() {
	element item;
	stackNode* temp = top;

	if (isStackEmpty()) {		//스택이 공백 리스트인 경우
		printf("\n\n Stack is empty !\n");
		return 0;
	}
	else {					// 스택이 공백 리스트가 아닌 경우
		item = temp->data;
		top = temp->link;	// top 위치를 삭제 노드 아래로 이동
		free(temp);			// 삭제된 노드의 메모리 반환
		return item;		// 삭제된 원소 반환
	}
}

// 스택 top 원소 검색
element peek() {
	if (isStackEmpty()) {
		printf("\n\n Stack is empty !\n");
		return 0;
	}
	else {
		return(top->data);
	}
}

// 스택의 원소를 top에서 bottom 순서로 출력
void printStack() {
	stackNode* p = top;
	printf("\n STACK [ ");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("] ");
}