#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int k = 0;
	int score[50];
	int result = 0;
	cin >> n >> k;
	
	for(int i=0; i<n; i++)
		{
			cin >> score[i];
		}
	
	for(int i=0; i<n; i++)
		{
			if(score[i] >= score[k-1] && score[i] > 0)
			result++;
		}
	cout << result << endl;
}
