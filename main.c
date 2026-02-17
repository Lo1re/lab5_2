#include <stdio.h>
#include <math.h>
int func(double x, double *y) {
	*y = sqrt(1 + 2 * x);
	if (*y < 0) {
		return -1;
	}
	else if (*y > 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main(void) {
	double a, b, h;
	double y;
	printf("enter a:");
	scanf_s("%lf", &a);
	printf("enter b:");
	scanf_s("%lf", &b);
	printf("enter h:");
	scanf_s("%lf", &h);
	printf("\n  x\t\t  y\t\t sign\n");
	printf("---------------------------------\n");

	for (double x = a; x <= b; x += h) {
		int f = func(x, &y);
		printf("%6.2lf\t%10.5lf\t%3d\n", x, y, f);
	}
	return 0;
}