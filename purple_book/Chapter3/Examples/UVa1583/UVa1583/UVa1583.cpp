#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define max 100005
int ans[max] = { 0 };

int main()
{
	int T, n;
	for (int m = 1; m < max; m++)
	{
		int x = m, y = m;
		while (x>0){ y += x % 10; x /= 10; }
		if (ans[y] == 0 || m < ans[y]) ans[y] = m;
	}
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		printf("%d\n", ans[n]);
	}
	return 0;
}