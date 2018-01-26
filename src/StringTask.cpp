#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string inputS;
	int length;
	cin >> inputS;
	length = inputS.length();
	for(int i = 0; i < length; i ++)
	{
		if(inputS[i]  >= 65 && inputS[i]  <= 90)
			inputS[i] += 32;
		if(inputS[i] != 'a' && inputS[i] != 'e' &&
		   inputS[i] != 'i' && inputS[i] != 'o' &&
		   inputS[i] != 'u' && inputS[i] != 'y')
		{
			cout << "." << inputS[i];
		}
	
		
	}
	
}
