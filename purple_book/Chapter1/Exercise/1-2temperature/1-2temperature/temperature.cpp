#include <stdio.h>

int main()
{
	double f, c;
	scanf_s("%lf", &f); //ע��Ҫʹ��%lf����scanf
	c = 5 * (f - 32) / 9; 
	printf("%.3f", c);
}