#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
const int maxn = 1000+5;
int cntSpace[maxn][maxn];
int numOfWords[maxn] = {0};
int totalLength = 0;

int maxx(int *a, int t){
	int MAXX = 0;
	for (int i = 0; i < t; i++){
		MAXX = max(MAXX, *a);
		a += maxn;
	}
	return MAXX;
}


int main(){
	vector <string> s, s2;
	int t = 0;
	string ss;
	while (getline(cin, ss)){
		s.push_back(ss);
		int L = s[t].length();
		int begin = 0, count = 0;
		int k = 0;
		for (int i = 0; i < L; i++){
			if (s[t][i] == ' ') 
				continue;
			else{
				begin = i;
				break;
			}
		}
		int word = 0;
		for (int i = begin; i < L; i++){
			if (s[t][i] == ' ' || i == L-1){
				if (i == L - 1){
					count++;
					s2.push_back(s[t].substr(begin, count));
					cntSpace[t][word] = count;
					numOfWords[t]++;
					continue;
				}
				s2.push_back(s[t].substr(begin, count));
				cntSpace[t][word] = count;
				i++;
				while (s[t][i] == ' ')
					i++;
				begin = i;
				i--;
				count = 0;
				word++;
				numOfWords[t]++;
				continue;
			}
			count++;
		}
		t++;
	}
	int Max[maxn];
	for (int i = 0; i < t; i++)
		totalLength += numOfWords[i];
	for (int i = 0; i < maxn; i++){
		Max[i] = maxx(&cntSpace[0][i], t);
	}
	int column = 0, line = 0;
	for (int i = 0; i < totalLength; i++){
		for (int j = 0; j < numOfWords[line]; j++){
			cout << s2[i];
			if (j != numOfWords[line]-1){
				for (int h = 0; h < Max[column] - s2[i].length() + 1; h++)
					cout << ' ';
			}
			i++;
			column++;
		}
		line++;
		i--;
		column = 0;
		cout << endl;
	}
	return 0;
}