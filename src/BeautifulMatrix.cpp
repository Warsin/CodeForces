#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	int a[5][5];
	int cols = 0, rows = 0;
	for(int i = 0; i < 5; i ++)
	{
		for(int j = 0; j < 5; j ++)
		{
			cin >> a[i][j];
			if(a[i][j] == 1)
			{
				cols = i;
				rows = j;
			}
		}
	}
	cout << abs(cols - 2) + abs(rows - 2) << endl;
}