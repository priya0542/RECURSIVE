#include<bits\stdc++.h>
using namespace std;
void printntoone(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<" "; //printing n
	printntoone(n-1); //to call next number
}
int main()
{
	int n;
	cin>>n;
	printntoone(n);
}
