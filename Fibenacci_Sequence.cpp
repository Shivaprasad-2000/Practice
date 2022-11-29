#include<bits/stdc++.h>
using namespace std;
void Input(int *n)
{
	cout<<"Enter the range :"<<endl;
	cin>>*n;
}
int Sequence(int n ,int sum)
{
	return n+sum;
}
void Output(int n)
{
	int a=0,b=1;
	long int sum=0;
	for(int i=1;i<=n;i++)
	{
		a=b;
		b=sum;
		cout<<sum<<" ";
		sum=Sequence(a,b);
	}
	cout<<endl;
}
int main()
{
	int n;
	Input(&n);
	Output(n);
	return 0;
}
