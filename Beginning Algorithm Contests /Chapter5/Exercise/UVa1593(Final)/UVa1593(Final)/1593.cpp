#include<iostream>  
#include<sstream>  
#include<string>  
#include<vector>  
#include <algorithm>

using namespace std;
vector<string> txt[1314];
string code, te;
int max_len[250];//��ÿһ������ĵ��ʵĳ��ȱ����������Ա㱣֤��ʽ��  
void print(string s, int len)
{//��ʽ�������  
	//for (int i = 0; i<s.size(); i++)
	//	cout << s[i];
	cout << s;
	for (int i = 0; i <= len - s.size(); i++)
		cout << ' ';
	//cout<<'*';  
}
int main()
{
	int col = 0, row = 0;//��������,col��ʾÿһ�еġ����ʡ�������  
	while (getline(cin, code))
	{
		stringstream tran(code);//����һ�����ַ�����������tran��������ֻ��Ҫ���ȡcin������ȡtran���ɣ�  
		while (tran >> te)
		{
			max_len[col] = max(max_len[col], (int)te.size());//�Ƚϳ���ȡ��ֵ��  
			col++;
			txt[row].push_back(te);//��ÿһ�����ʴ���������棡  
		}
		row++, col = 0;
	}
	for (int i = 0; i<row; i++)
	{
		int j = 0;
		for (; j<txt[i].size() - 1; j++)
			print(txt[i][j], max_len[j]);
		cout << txt[i][j] << endl;//ÿ�е����һ���ǲ�������ո�ģ�  
	}
	return 0;
}