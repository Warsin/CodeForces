#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int maxNum = 0;
	int n;
	cin >> n;
	int enter,out,result = 0;
	for(int i = 0; i < n; i ++)
	{
		cin >> out >> enter;
		result = result + enter - out;
		if(result >= maxNum)
		{
			maxNum = result;
		}
	}
	cout << maxNum << endl;
}