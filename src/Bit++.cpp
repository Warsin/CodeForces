#include<iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   string state;
   int result = 0;
   for(int i = 0; i < n; i ++)
   {
	cin >> state;
	if(state[0] == '+')
	{
		++result;
	}
	else if(state[0] == '-')
	{
		--result;
	}
	else
	{
		if(state[1] == '+')
			result++;
		else if(state[1] == '-')
			result--;
	}
   }
   cout << result << endl;
}
