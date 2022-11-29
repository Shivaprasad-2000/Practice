#include<bits/stdc++.h>
using namespace std;
void Input(int *n,int *r)
{
	cout<<"Enter n :";
	cin>>*n;
	cout<<"Enter r :";
	cin>>*r;
}
int Factorial(int n)
{
	int factorial=1;
	for(int i=2;i<=n;i++)
	{
		factorial*=i;
	}
	return factorial;
}
void Output(int n,int r)
{
	int nCr;
	nCr=Factorial(n)/(Factorial(n-r)* Factorial(r));
	cout<<nCr<<endl;
}
int main()
{
	int n,r;
	Input(&n,&r);
	Output(n,r);
	return 0;
}
