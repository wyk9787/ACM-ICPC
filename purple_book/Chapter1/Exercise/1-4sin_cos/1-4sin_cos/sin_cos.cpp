#include <stdio.h>
#include <math.h>

#define Pai 3.1415926

int main()
{
	float n;
	float s, c;
	scanf_s("%f", &n);
	n = n * Pai / 180;
	s = sin(n);
	c = cos(n);
	printf("%f %f\n", s, c);

	return 0;
}