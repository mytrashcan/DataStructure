#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	clock_t start, stop;
	double duration;
	start = clock(); // 측정 시작

	for (int i = 0; i < 1000000; i++) {}

	stop = clock(); // 측정 종료
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("실행 시간은 %f초 입니다.", duration);
	return 0;
}