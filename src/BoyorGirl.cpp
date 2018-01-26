#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	string name;
	cin >> name;
	int wordCnt = 0;
	int length = name.length();
	int a[26];
	memset(a,0,sizeof(a));
	for(int i = 0; i < length; i ++)
	{
		a[int(name[i] - 97)] ++;
	}
	for(int i = 0; i < 26; i ++)
	{
		if(a[i] != 0)
			wordCnt ++;
	}
	if(wordCnt %2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
}