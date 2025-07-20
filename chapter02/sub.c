#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int sub(int n) {
	if (n < 0) return 0;
	return n + sub(n - 3);
}

int sub_it(int n) {
	int result = 0;
	for (int i = n; i > 0; i -= 3) {
		result += i;
	}
	return result;
}
/*
int main(void) {
	int n;
	scanf_s("%d", &n);
	printf("%d�� �Լ�����: %d", n, sub_it(n));
}
*/