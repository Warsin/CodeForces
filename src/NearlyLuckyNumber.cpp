#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	string number;
	cin >> number;
	int length = number.length();
	int cnt = 0;
	for(int i = 0; i < length; i ++)
	{
		if(number[i] == '4' || number[i] == '7')
			cnt ++;
	}
	if(cnt != 0 &&(cnt == 4 || cnt == 7
			))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}