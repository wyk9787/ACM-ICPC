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
		int sum = 0, count = 1;
		memset(s, 0, sizeof(s));
		scanf("%s", s);
		int len = strlen(s);
		for (int i = 0; i < len; i++)
		{
			if (s[i] == 'O')
			{
				sum += count;
				count++;
			}
			else
				count = 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}