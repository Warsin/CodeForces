#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,result = 0;
	cin >> n;
	int a[5]={0,0,0,0,0};
	int group;
	for(int i = 0; i < n; i ++)
	{
	cin >> group;
	if(group == 1) a[0]++;
	if(group == 2) a[1]++;
	if(group == 3) a[2]++;
	if(group == 4) a[3]++;
	}
	if(a[2] >= a[0])
	 {
	   if(a[1]%2 != 0)	
	    result = a[3] + a[2] +a[1]/2 + 1;
	   else
	    result = a[3] + a[2] +a[1]/2;
	 }
	else if(a[2] < a[0])
	{
	   if(a[1] * 2>= (a[0] - a[2]))
        	  {
			if(((a[1] - (a[2] -a[0])/2)%2 == 0 )&& ((a[2] - a[0]) % 2 ==0))
			result = a[3] + a[2] + (a[0] - a[2])/2 + (a[1] - (a[0] -a[2])/2)/2;
			else 
			result = a[3] + a[2] + (a[0] - a[2])/2 + (a[1] - (a[0] -a[2])/2)/2+1;
			
		  }
	   else
 		  {
			if((a[0] - a[2] - a[1] * 2)%4 == 0)
			 {
			result = a[3] + a[2] + a[1] + (a[0] - a[2] - a[1] *2)/4;			
			 }	  
			else
			result = a[3] + a[2] + a[1] + (a[0] -a[2] - a[1] *2)/4 + 1;
		  }
		
	}
	cout << result << endl;
}
