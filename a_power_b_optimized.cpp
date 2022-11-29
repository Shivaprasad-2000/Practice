#include<bits/stdc++.h>
using namespace std;
void Input(int *a,int *b)
{
	cout<<"Enter a = ";
	cin>>*a;
	cout<<"Enter b = ";
	cin>>*b;
}
int Pow(int a,int b)
{
	int c=a,j=0;
	if(b%2==0)
	{
		for(int i=2;i<=b;i=i*2)
		{
			c=c*c;
			j++;
		}
	}
	else
	{
		for(int i=2;i<=b;i=i*2)
		{
			c=c*c;
			j++;
		}
		c=c*a;
	}
	cout<<"J = "<<j<<endl;
	return c;
}
int main()
{
	int a,b,ans;
	Input(&a,&b);
	ans=Pow(a,b);
	cout<<"a^b = "<<ans<<endl;
	return 0;
}
