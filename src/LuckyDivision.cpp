#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	string s;
	cin >> s;
	bool luckyFlag = false;
	int length = s.length();
	for(int i = 0; i < length; i ++)
	{
		if(s[i] == '4' || s[i] == '7')
		{
			if(i == length - 1)
				luckyFlag = true;
			continue;
		}
		else
		{
			break;
		}
	}
	int cnt = atoi(s.c_str());
	if(!luckyFlag)
	{
		if(cnt % 4 == 0 || cnt % 7 == 0 ||
			cnt % 44 == 0 || cnt % 77 == 0 ||
		   cnt % 447 == 0 || cnt % 747 == 0 ||
		   cnt % 444 == 0 || cnt % 777 == 0 ||
		   cnt % 47 == 0 || cnt % 74 == 0 ||
		   cnt % 474 == 0 || cnt % 744 == 0 ||
		   cnt % 477 == 0 || cnt % 774 == 0 )
		{
			luckyFlag = true;
		}
	}
	if(luckyFlag) 
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}