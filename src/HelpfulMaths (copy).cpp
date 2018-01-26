#include<iostream>
#include<cstring>
using namespace std;
bool compare(int a, int b)
{
	return a < b;
}
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
	sort(a,a+k,compare);
	for(int i = 0; i < k; i++)
	{
		if(i != k-1)
		cout << a[i] <<"+";
		else
		cout << a[i];
	}
}
