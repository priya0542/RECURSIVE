#include<bits\stdc++.h>
using namespace std;
void printoneton(int n)
{
	if(n==0)
	{
		return;
	}
	printoneton(n-1); //to call next number
	cout<<n<<" "; //printing n
}
int main()
{
	int n;
	cin>>n;
	printoneton(n);
}
