#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int result = 0;
	int flagA,flagB,flagC;
	for(int i = 0; i < n; i ++)
		{
			cin >> flagA >> flagB >> flagC;
			if(flagA + flagB + flagC >= 2)
				{
				result ++;
				}
		}
	cout << result<<endl;
}
