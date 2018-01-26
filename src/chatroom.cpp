#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int length = s.length();
	bool hFlag = false, eFlag = false;
	bool lFlag = false, oFlag = false;
	int hCnt, eCnt, lCnt = 0, Ocnt;
	for(int i = 0; i < length; i ++)
	{
		if(s[i] == 'h' && !hFlag)
			{
				hFlag = true;
				hCnt = i;
			}
		 if(s[i] == 'e' && hFlag)
			{
				eFlag = true;
				hCnt = i;
			}
		if(s[i] == 'l' && eFlag)
			{
				lCnt ++;
			}
		if(s[i] == 'o' && lCnt >= 2)
			{
				oFlag = true;
			}
	}
	if(oFlag) 
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}