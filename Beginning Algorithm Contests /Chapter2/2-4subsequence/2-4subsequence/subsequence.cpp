#include <stdio.h>

int main()
{
	int n=0, m=0, kase=0;
	while (scanf_s("%d%d", &n, &m) == 2 && (n || m))
	{
		double sum = 0;
		while (n <= m)
		{
			sum = sum + 1.0 / n / n;
			n++;
		}

		printf("Case %d: %.5lf\n", ++kase, sum);
	}
}