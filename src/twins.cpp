#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
bool compare(int a, int b)
{
	return a > b;
}
int main()
{
	int n, a[100];
	cin >> n;
	int sum = 0;
	for(int i = 0; i < n; i ++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sort(a,a+n,compare);
	int sum1 = 0;
	int cnt = 0;
	for(int i = 0; i < n; i ++)
	{
		sum1 += a[i];
		sum -= a[i];
		cnt ++;
		if(sum1 > sum)
			break;
	}
	cout << cnt << endl;
}