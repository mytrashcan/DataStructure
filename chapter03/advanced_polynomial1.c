#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX_DEGREE 101

// å�� �ִ� polynomial1.c �� ������ �ȵ� ������� ������ ����

typedef struct {          // ���׽� ����ü Ÿ�� ����
	int degree;             // ���׽��� ����
	float coef[MAX_DEGREE]; // ���׽��� ���
}polynomial;

polynomial poly_add(polynomial A, polynomial B) {
	polynomial C;
	C.degree = MAX(A.degree, B.degree);
	// �ּ����� ���� �� �Է� �� �迭���� ������ ������������ �����Ǿ�����
	for (int i = 0; i <= C.degree; i++)
		C.coef[i] = 0;

	for (int i = 0; i <= A.degree; i++)
		C.coef[i] += A.coef[i];

	for (int i = 0; i <= B.degree; i++)
		C.coef[i] += B.coef[i];
	
	return C;
}

void print_poly(polynomial p) {
	// �ְ����׺��� ���
	for (int i = p.degree; i > 0; i--)
		printf("%3.1fx^%d + ", p.coef[i], i);
	printf("%3.1f \n", p.coef[0]);
}
/*
int main(void) {
	// �ּ����� ���� �ۼ��ؾ� ��
	polynomial a = { 5,{3,6,0,0,0,10} };
	polynomial b = { 4,{1,0,5,0,7} };
	polynomial c = poly_add(a, b);

	printf("A(x) = ");
	print_poly(a);
	printf("B(x) = ");
	print_poly(b);
	printf("---------------------------------------------------\n");
	printf("C(x) = A(x) + B(x) = ");
	print_poly(c);

	return 0;
}
*/