#include<bits\stdc++.h>
using namespace std;
int getsumofdigits(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n%10+getsumofdigits(n/10);
}
int main()
{
	int n;
	cin>>n;
	cout<<getsumofdigits(n);
}
