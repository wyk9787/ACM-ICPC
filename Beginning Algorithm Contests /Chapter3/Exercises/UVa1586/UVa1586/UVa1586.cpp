#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define maxn 100

char s[maxn];

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		double sum = 0.0;
		memset(s, 0, sizeof(s));
		scanf("%s", s);
		int len = strlen(s);
		for (int i = 0; i < len; i++)
		{
			int num = 1;
			if (s[i + 1] > '0' && s[i + 1] < '9')
			{
				if (s[i + 2] > '0' && s[i + 2] < '9')
					num = 10 * (s[i + 1] - '0') + s[i + 2] - '0';
				else
					num = s[i + 1] - '0';
			}
			switch (s[i])
			{
				case 'C':
				{
					sum += 12.01 * num;
					break;
				}
				case 'H':
				{
					sum += 1.008 * num;
					break;
				}
				case 'O':
				{
					sum += 16.00 * num;
					break;
				}
				case 'N':
				{
					sum += 14.01 * num;
					break;
				}
			}
		}
		printf("%0.3f\n", sum);
	}
	return 0;
}