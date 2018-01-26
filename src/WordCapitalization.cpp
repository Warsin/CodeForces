#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	string word;
	cin >> word;
	int length = word.length();
	for(int i = 0; i < length; i ++)
	{
		if(word[0] >= 97)
			word[0] -=32;
		cout << word[i];
	}
	
}