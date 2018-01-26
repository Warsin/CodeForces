#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	string input;
	cin >> input;
	int length = input.length();
	int mode = 0,upcaseCnt = 0;
	for(int i = 0; i < length; i ++)
	{
		if (input[i] >= 65 && input[i] <= 90)
			upcaseCnt ++;
		if(input[0] >= 65 && input[0] <= 90)
		{
			mode = 0;
		}
		else if(!(input[0] >= 65 && input[0] <= 90))
		{
			mode = 1;
		}
	}
	if((mode == 0 && upcaseCnt == length) || (mode == 1 && upcaseCnt == length - 1))
	{
		for(int i = 0; i < length; i ++)
		{
			if(input[0] >= 65 && input[0] <= 90)
			{
					cout << char(input[i] + 32);
			}
			else if(!(input[0] >= 65 && input[0] <= 90))
			{
				if(i != 0)
					cout << char(input[i] + 32);
				else
					cout << char(input[i] - 32);
			}
		}
	}
	else
	{
		cout << input << endl;
	}
	
}