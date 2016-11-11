#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//
//#define maxn 100
//
//char s[maxn];
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		memset(s, 0, sizeof(s));
//		scanf("%s", s);
//		int len = strlen(s);
//		int i, flag;
//		for (i = 1; i <= len; i++)
//		{
//			if (len%i != 0) continue;
//			flag = 1;
//			for (int j = 0; j < len-i; j++)
//			{
//				if (s[j + i] == s[j])
//					continue;
//				else
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		 }
//		if (!flag)
//			printf("%d\n", len);
//	}
//	return 0;
//}

#include <stdio.h>
#include <string.h>

char str[104];

int main()
{
	int n;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", str);
		int len = strlen(str);
		for (int k, i = 1; i <= len; ++i)
		if (len%i == 0) {
			for (k = i; k < len; ++k)
			if (str[k] != str[k%i])
				break;
			if (k == len) {
				printf("%d\n", i);
				break;
			}
		}
		if (n) printf("\n");
	}
	return 0;
}