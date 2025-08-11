#include <stdio.h>
#include <stdlib.h>
/*
// ������ ���� ������ �����Ǵ� ���
#define MAX_STACK_SIZE 100      // ������ �ִ� ũ��
#define MAX_STRING 100

typedef struct {                // �������� �ڷ���
	int student_no;
	char name[MAX_STRING];
	char address[MAX_STRING];
}element; 

element stack[MAX_STACK_SIZE];
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
	element ie = { 20190001, "Hong", "Seoul" };
	element oe;

	push(ie);
	oe = pop();

	printf("�й�: %d\n", oe.student_no);
	printf("�̸�: %s\n", oe.name);
	printf("�ּ�: %s", oe.address);
	return 0;
}
*/