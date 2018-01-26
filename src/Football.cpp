#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string player;
	cin >> player;
	int length;
	length = player.length();
	int num = 1;
	for(int i = 0; i < length - 1; i ++ )
	{
		if(player[i] == player[i+1])
		{
		num ++;
		}
		else
		{
		num = 1;
		}
	 	if(num >= 7)
		{
		break;
		}
	}
 	if(num >= 7)
	{
	cout << "YES" << endl;
	}
	else
	cout << "NO" << endl;


}
