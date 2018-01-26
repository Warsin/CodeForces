#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int l = 0, k = 0, temp = 0;
	char a[100];
	l = s.length();
	for(int i = 0; i < l; i ++)
	{
	if(s[i] != '+')
		{
		a[k] = s[i];
		k++;
		}
	}
	for(int i = 0; i < k-1; i++)
	{
		for(int j = i+1; j < k; j ++)
		{
		if(a[i] > a[j])
			{
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
			}
		}
	}
	for(int i = 0; i < k; i++)
	{
		if(i != k-1)
		cout << a[i] <<"+";
		else
		cout << a[i];
	}
}
