#include <stdio.h>
#include <stdlib.h>
/*
// ������ ���� ������ �����Ǵ� ���
#define MAX_STACK_SIZE 100      // ������ �ִ� ũ��
typedef int element;            // �������� �ڷ���
element stack[MAX_STACK_SIZE];  // 1���� �迭
int top = -1;

// ���� ����
int is_empty() {
	return (top == -1);
}
// ��ȭ ���� ����
int is_full() {
	return (top == (MAX_STACK_SIZE - 1));
}
// push �Լ�
void push(element item) {
	if (is_full()) {
		fprintf(stderr, "stack full\n");
		return;
	}
	else stack[++top] = item;
}
// pop �Լ�
element pop() {
	if (is_empty()) {
		fprintf(stderr, "stack empty\n");
		exit(1);
	}
	else return stack[top--];
}
// peak �Լ�
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