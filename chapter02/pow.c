#include <stdio.h>

double pow(double x, int n) {
	if (n == 0) return 1;
	else if (n % 2 == 0) return pow(x * x, n / 2);
	else if (n % 2 == 1) return x * pow(x * x, (n - 1) / 2);
}

double pow_it(double x, int n) {
	int i, result = 1;
	for (i = 0; i < n; i++)
		result *= x;
	return result;
}

double pow_2(double x, int n) {
	if (n == 0) return 1;
	else return x * pow_2(x, n - 1);
}
/*
int main(void) {
	printf("%fÀÇ %d½ÂÀº %f", 2.0, 10, pow_2(2, 10));
}
*/