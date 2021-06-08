#include<iostream>
using namespace std;
int getsum(int n)
{
	if(n<=1)
	{
		cout<<1;
	}
	return (n+n-1);
}
int main()
{
	int n;
	cin>>n;
	getsum(n);
}
