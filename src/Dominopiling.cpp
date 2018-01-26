#include<iostream>
using namespace std;
int main()
{
	int M = 0,N = 0;
	cin >> M >> N;
	int result = 0;
	if(N == 1)
		{
			 result = 0;
		} 
	else if( N>=2 && M == 1)
		{
			result += N / 2;
		}
	else
		{
			result += N * (M / 2);
			if(M - 2 >= 0)
				{
					result += N/2 * (M % 2);
				}
		}
	cout << result << endl;
}
