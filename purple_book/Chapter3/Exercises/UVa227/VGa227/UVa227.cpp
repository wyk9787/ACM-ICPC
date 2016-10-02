// UVa OJ上因未知原因始终Wrong Answers
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define maxn 100

char cmd[maxn];
char puzzle[maxn][maxn];

int main()
{

	int N = 1, m, n, kase = 1;
	while (N)
	{
		memset(puzzle, 0, sizeof(puzzle));
		for (int i = 0; i < 5; i++)
		{
			if (!N) break;
			fgets(puzzle[i], maxn, stdin);
			for (int j = 0; j < 5; j++)
			{
				if (puzzle[i][j] == ' '){ m = i; n = j; }
				if (puzzle[i][j] == 'Z') { N = 0; break; }
			}
		}
		if (!N) break;
		int flag = 0, flag2 = 1;
		while (flag2 && ~scanf("%s", cmd))
		{
			int len = strlen(cmd);
			for (int i = 0; i < len; i++)
			{
				if (cmd[i] == '0') {
					flag2 = 0; break;
				}
				switch (cmd[i])
				{
				case 'R':
				{
							if (n + 1 > 4) { flag = 1; break; }
							puzzle[m][n] = puzzle[m][n + 1];
							n++;
							puzzle[m][n] = ' ';
							break;
				}
				case 'L':
				{
							if (n - 1 < 0) { flag = 1; break; }
							puzzle[m][n] = puzzle[m][n - 1];
							n--;
							puzzle[m][n] = ' ';
							break;
				}
				case 'B':
				{
							if (m + 1 > 4)  { flag = 1; break; }
							puzzle[m][n] = puzzle[m + 1][n];
							m++;
							puzzle[m][n] = ' ';
							break;
				}
				case 'A':
				{
							if (m - 1 < 0)  { flag = 1; break; }
							puzzle[m][n] = puzzle[m - 1][n];
							m--;
							puzzle[m][n] = ' ';
							break;
				}
				default:
				{
						   flag = 1;
						   break;
				}
				}
				fflush(stdin);
			}
		}
		printf("Puzzle #%d:\n", kase++);
		if (!flag)
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					printf("%c", puzzle[i][j]);
					if (j < 4) printf(" ");
				}
				printf("\n");
			}
			printf("\n");
		}
		else
			printf("This puzzle has no final configuration.\n\n");
		fflush(stdin);
	}

}