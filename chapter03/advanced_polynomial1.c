#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX_DEGREE 101

// 책에 있는 polynomial1.c 가 마음에 안들어서 내맘대로 수정한 버전

typedef struct {          // 다항식 구조체 타입 선언
	int degree;             // 다항식의 차수
	float coef[MAX_DEGREE]; // 다항식의 계수
}polynomial;

polynomial poly_add(polynomial A, polynomial B) {
	polynomial C;
	C.degree = MAX(A.degree, B.degree);
	// 최소차항 부터 값 입력 즉 배열에는 차수가 오름차순으로 나열되어있음
	for (int i = 0; i <= C.degree; i++)
		C.coef[i] = 0;

	for (int i = 0; i <= A.degree; i++)
		C.coef[i] += A.coef[i];

	for (int i = 0; i <= B.degree; i++)
		C.coef[i] += B.coef[i];
	
	return C;
}

void print_poly(polynomial p) {
	// 최고차항부터 출력
	for (int i = p.degree; i > 0; i--)
		printf("%3.1fx^%d + ", p.coef[i], i);
	printf("%3.1f \n", p.coef[0]);
}
/*
int main(void) {
	// 최소차항 부터 작성해야 함
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