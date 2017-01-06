#define _CRT_SECURE_NO_WARNINGS

//还可以把六个长方形的长宽排列以后来比较，更加方便快捷

#include <stdio.h>
#include <string.h>

int isPair(int a, int b, int c, int d){ //比较一个长方形的长和宽是否和另外一个长方形的长和宽相同
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
		int c[10010] = { 0 }; //存每个数字出现的次数
		int count = 0, flag = 1, q = 0;
		int mark[20]; //该数组用来标记哪些长方形已经被匹配到了
		memset(mark, -1, sizeof(mark)); 
		for (int i = 2; i < 12; i++) //输入
			scanf("%d", &a[i]);
		for (int i = 0; i < 12; i+=2)
			for (int j = i + 2; j < 12; j += 2){
				int flag2 = 1;
				for (int k = 0; k < 20; k++) //查看mark当前比较的两个数组是否已经被匹配过了
					if (mark[k] == j || mark[k] == i){
						flag2 = 0;
						break;
					}
				if (flag2){
					if (isPair(a[i], a[i + 1], a[j], a[j + 1])){
						count++;
						mark[q] = j; //匹配到了的长方形进入该数组，以免再次匹配
						q++;
						break;
					}
				}
			}
		for (int i = 0; i < 12; i++) //统计每个数出现的次数
			c[a[i]]++;
		for (int i = 0; i < 12; i++)
			if (c[a[i]] != 4 && c[a[i]] != 8 && c[a[i]] != 12){ //一个边长的数字只可能出现四次或者八次或者十二次
				flag = 0;
				break;
			}
		if (flag && count == 3) //之前排出了所有重复的匹配，所以当且仅当有3对匹配的时候才是正确的
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}