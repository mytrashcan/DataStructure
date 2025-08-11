#include <stdio.h>
#include <stdlib.h>

// ������ ���� ������ �����Ǵ� ���
#define MAX_STACK_SIZE 100      // ������ �ִ� ũ��
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

void init_stack(StackType* s) {
	s->top = -1;
}

// ���� ����
int is_empty(StackType* s) {
	return (s->top == -1);
}
// ��ȭ ���� ����
int is_full(StackType* s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}
// push �Լ�
void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "stack full\n");
		return;
	}
	else s->data[++(s->top)] = item;
}
// pop �Լ�
element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "stack empty\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}
// peak �Լ�
element peak(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "stack empty\n");
		exit(1);
	}
	else return s->data[s->top];
}

int main(void) {
	StackType s;
	StackType k;

	init_stack(&k);
	init_stack(&s);

	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	push(&k, pop(&s));
	push(&k, pop(&s));
	push(&k, pop(&s));

	printf("%d\n", pop(&k));
	printf("%d\n", pop(&k));
	printf("%d", pop(&k));
	return 0;
}