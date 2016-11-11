#include <stdio.h>

int main()
{
	int n, num=0;
	while (scanf_s("%d", &n) == 1 )
	{
		for (int i = n; i > 0; i--)
		{
			for (int k = 0; k < num; k++) //打印空格
				printf(" ");
			for (int j = 2 * i - 1; j > 0; j--) //打印每行的#
				printf("#");
			printf("\n"); //换行
			num++; //用来标记每行有多少个空格
		}
	}
	return 0;
}