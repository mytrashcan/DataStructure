#include <stdio.h>

int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fib(n - 2) + fib(n - 1);
}

int fib_it(int n) {
	if (n == 0)return 0;
	if (n == 1)return 1;

	int pp = 0; // 첫번째
	int p = 1; // 두번째
	int result = 0;

	for (int i = 2; i <= n; i++) {
		result = pp + p;
		pp = p;
		p = result;
	}
	return result;
}
/*
int main(void) {
	printf("%d", fib_it(33));
}
*/