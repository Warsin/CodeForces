#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x[100],y[100],z[100];
	int X = 0, Y = 0, Z = 0;
	for(int i = 0; i < n; i ++)
	{
		cin >> x[i] >> y[i] >> z[i];
		X += x[i];
		Y += y[i];
		Z += z[i];
	}
	if(X == 0 && Y == 0 && Z == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

}