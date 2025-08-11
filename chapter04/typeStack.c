#include <stdio.h>
#include <stdlib.h>
/*
// 스택이 전역 변수로 구현되는 경우
#define MAX_STACK_SIZE 100      // 스택의 최대 크기
#define MAX_STRING 100

typedef struct {                // 데이터의 자료형
	int student_no;
	char name[MAX_STRING];
	char address[MAX_STRING];
}element; 

element stack[MAX_STACK_SIZE];
int top = -1;

// 공백 검출
int is_empty() {
	return (top == -1);
}
// 포화 상태 검출
int is_full() {
	return (top == (MAX_STACK_SIZE - 1));
}
// push 함수
void push(element item) {
	if (is_full()) {
		fprintf(stderr, "stack full\n");
		return;
	}
	else stack[++top] = item;
}
// pop 함수
element pop() {
	if (is_empty()) {
		fprintf(stderr, "stack empty\n");
		exit(1);
	}
	else return stack[top--];
}
// peak 함수
element peak() {
	if (is_empty()) {
		fprintf(stderr, "stack empty\n");
		exit(1);
	}
	else return stack[top];
}

int main(void) {
	element ie = { 20190001, "Hong", "Seoul" };
	element oe;

	push(ie);
	oe = pop();

	printf("학번: %d\n", oe.student_no);
	printf("이름: %s\n", oe.name);
	printf("주소: %s", oe.address);
	return 0;
}
*/