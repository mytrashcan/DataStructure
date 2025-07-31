#include <stdio.h>
#include <math.h>

typedef struct Point {
	int x;
	int y;
}Point;

double get_distance(Point p1, Point p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
/*
int main(void) {
	Point p1 = { 1, 2 };
	Point p2 = { 9, 8 };
	printf("%f", get_distance(p1, p2));
	return 0;
}
*/