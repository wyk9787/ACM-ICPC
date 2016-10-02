#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define max 15

int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		int s[max] = { 0 };
		int t;
		int sum = 0;
		scanf("%d", &t);
		for (int i = 1; i <= t; i++)
		{
			if (i < 10)
				s[i] += 1;
			else
			{
				int temp = i;
				while (temp > 0)
				{
					s[temp % 10] += 1;
					temp /= 10;
				}
			}
		}
		for (int i = 0; i < 9; i++)
			printf("%d ", s[i]);
		printf("%d\n", s[9]);
	}
	return 0;
}