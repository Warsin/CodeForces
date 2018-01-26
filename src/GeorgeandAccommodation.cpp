#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int p[101],q[101];
	int result = 0;
	for(int i = 0; i < n; i ++)
	{
		cin >> p[i] >> q[i];
		if(q[i] - p[i] >= 2)
		{
			result ++;
		}
	}
	cout << result << endl;
}