#include <stdio.h>

int main()
{
	int n, sum;
	scanf_s("%d", &n);
	sum = n + n*(n - 1) / 2;
	printf("%d\n", sum);

	return 0;
}