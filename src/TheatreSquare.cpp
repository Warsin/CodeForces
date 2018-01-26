#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 __int64 n,m,a;
 cin>>n;
 cin>>m;
 cin>>a;
__int64 result;
result=ceil(n/(a*1.0));
if(m-a>=0)
   {
	__int64 sum=ceil((m-a)/(a*1.0))+1;
	result*=sum;	
   }
cout<<result<<endl;
}
