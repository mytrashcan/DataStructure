#include <stdio.h>
#include <stdlib.h>
/*
// 스택이 전역 변수로 구현되는 경우
#define MAX_STACK_SIZE 100      // 스택의 최대 크기
typedef int element;            // 데이터의 자료형
element stack[MAX_STACK_SIZE];  // 1차원 배열
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
	push(1);
	push(2);
	push(3);
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d", pop());
	return 0;
}
*/