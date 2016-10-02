#include <stdio.h>

int main()
{
	double f, c;
	scanf_s("%lf", &f); //注意要使用%lf进行scanf
	c = 5 * (f - 32) / 9; 
	printf("%.3f", c);
}