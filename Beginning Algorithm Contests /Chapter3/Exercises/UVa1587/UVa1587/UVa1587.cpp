#define _CRT_SECURE_NO_WARNINGS

//�����԰����������εĳ��������Ժ����Ƚϣ����ӷ�����

#include <stdio.h>
#include <string.h>

int isPair(int a, int b, int c, int d){ //�Ƚ�һ�������εĳ��Ϳ��Ƿ������һ�������εĳ��Ϳ���ͬ
	if (a == c)
		if (b == d)
			return 1;
		else
			return 0;
	else if (a == d)
		if (b == c)
			return 1;
		else
			return 0;
	else
		return 0;
}



int main(){

	int a[20];
	while (scanf("%d%d", &a[0], &a[1]) == 2){
		int c[10010] = { 0 }; //��ÿ�����ֳ��ֵĴ���
		int count = 0, flag = 1, q = 0;
		int mark[20]; //���������������Щ�������Ѿ���ƥ�䵽��
		memset(mark, -1, sizeof(mark)); 
		for (int i = 2; i < 12; i++) //����
			scanf("%d", &a[i]);
		for (int i = 0; i < 12; i+=2)
			for (int j = i + 2; j < 12; j += 2){
				int flag2 = 1;
				for (int k = 0; k < 20; k++) //�鿴mark��ǰ�Ƚϵ����������Ƿ��Ѿ���ƥ�����
					if (mark[k] == j || mark[k] == i){
						flag2 = 0;
						break;
					}
				if (flag2){
					if (isPair(a[i], a[i + 1], a[j], a[j + 1])){
						count++;
						mark[q] = j; //ƥ�䵽�˵ĳ����ν�������飬�����ٴ�ƥ��
						q++;
						break;
					}
				}
			}
		for (int i = 0; i < 12; i++) //ͳ��ÿ�������ֵĴ���
			c[a[i]]++;
		for (int i = 0; i < 12; i++)
			if (c[a[i]] != 4 && c[a[i]] != 8 && c[a[i]] != 12){ //һ���߳�������ֻ���ܳ����Ĵλ��߰˴λ���ʮ����
				flag = 0;
				break;
			}
		if (flag && count == 3) //֮ǰ�ų��������ظ���ƥ�䣬���Ե��ҽ�����3��ƥ���ʱ�������ȷ��
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}