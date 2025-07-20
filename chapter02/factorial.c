#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// recursive version
int factorial(int n) {
	printf("factorial(%d) \n", n);
	if (n <= 1) return(1);
	else return n * factorial(n - 1);
}

// iterator version
int factorial_it(int n) {
	int i, result = 1;
	for (i = 1; i <= n; i++)
		result = result * i;
	return result;
}

/*
int main(void) {
	int n;
	scanf_s("%d", &n);
	printf("%dÀÇ ÆÑÅä¸®¾ó: %d", n, factorial_it(n));
	return 0;
}
*/