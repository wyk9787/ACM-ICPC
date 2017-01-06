#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

char s[101000], t[101000];

int search(char* s, char* t, int i, int len){
	char* mark;
	mark = strchr(t, s[i]);
	if (mark)
		if (*(s + i + 1) == '\0')
			return 1;
		else
			return search(s, mark+1, i + 1, len);
	else
		return 0;
}


int main(){

	while (scanf("%s%s", s, t) != EOF){
		int lens = strlen(s);
		int flag = search(s, t, 0, lens);
		if (flag)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}