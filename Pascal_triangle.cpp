#include<bits/stdc++.h>
using namespace std;
void Input(int *n)
{
	cout<<"Enter n :";
	cin>>*n;
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
void Output(int n)
{
	int nCr;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
			{
				nCr=Factorial(i)/(Factorial(i-j)* Factorial(j));
				cout<<nCr<<" ";
			}
		cout<<endl;
	}
}
int main()
{
	int n;
	Input(&n);
	Output(n);
	return 0;
}
