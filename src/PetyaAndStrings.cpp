#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s1,s2;
	int l;
	cin >> s1 >> s2;
	l=s1.length();
	bool notEqual=false;
	for(int i = 0; i < l; i ++)
	{
	if(s1[i] >=65 && s1[i] <= 90)
	s1[i] +=32;
	if(s2[i] >=65 && s2[i] <= 90)
	s2[i] +=32;
	if(s1[i] > s2[i])
	{
	cout << "1" << endl;
	notEqual =true;
	break;
	}
	if(s1[i] < s2[i])
	{
	cout << "-1" << endl;
	notEqual =true;
	break;
	}
	}
if(!notEqual)
	cout<<"0"<<endl;
}
