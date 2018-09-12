#include<iostream>
#include<math.h>

using namespace std;
int GCD(int a, int b)
{
	
	int rem = a%b;
	while(rem  != 0)
	{
		a = b;
		b = rem;
		rem = a%b;
	}
	return b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"The GCD of "<<a<<" and "<<b<<" is "<<GCD(a,b);
	return 0;
}
