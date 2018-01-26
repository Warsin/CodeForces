#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	string instruct;
	cin >> instruct;
	bool flag = false;
	int length = instruct.length();
	for(int i = 0; i < length; i ++)
	{
		if(instruct[i] == 'H' || instruct[i] == 'Q' ||
		   instruct[i] == '9')
		{
			flag = true;
			break;
		}
	}
	if(flag) 
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}