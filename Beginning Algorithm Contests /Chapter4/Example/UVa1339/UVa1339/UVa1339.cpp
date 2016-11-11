#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}


char s1[110] = { '0' }, s2[110] = {'0'};

int main()
{
	while (scanf("%s%s", s1, s2) == 2)
	{
		int flag = 1;
		int cnt1[26] = { 0 }, cnt2[26] = { 0 };
		int len1 = strlen(s1);
		for (int i = 0; i < len1; i++)
		{
			cnt1[s1[i] - 'A']++;
			cnt2[s2[i] - 'A']++;
		}
		qsort(cnt1, 26, sizeof(int), cmp);
		qsort(cnt2, 26, sizeof(int), cmp);
		for (int i = 0; i < 26; i++)
		{
			if (cnt1[i] != cnt2[i])
			{
				printf("NO\n");
				flag = 0;
				break;
			}
		}
		if (flag)
			printf("YES\n");
	}
	return 0;
}