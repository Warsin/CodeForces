#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	string words;
	int length = 0;
	for(int i=0; i<n; i++)
	{
		cin >> words;
		length = strlen(words.c_str());

		if(length > 10)
		{
			cout << words[0] << length-2 << words[length-1] << endl;
		}
		else
		{
		    cout << words << endl;
		}


	}
}
