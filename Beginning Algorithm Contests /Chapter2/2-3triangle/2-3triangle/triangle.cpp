#include <stdio.h>

int main()
{
	int n, num=0;
	while (scanf_s("%d", &n) == 1 )
	{
		for (int i = n; i > 0; i--)
		{
			for (int k = 0; k < num; k++) //��ӡ�ո�
				printf(" ");
			for (int j = 2 * i - 1; j > 0; j--) //��ӡÿ�е�#
				printf("#");
			printf("\n"); //����
			num++; //�������ÿ���ж��ٸ��ո�
		}
	}
	return 0;
}