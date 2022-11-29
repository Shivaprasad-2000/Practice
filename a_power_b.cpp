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
	int c=1,i;
	for(i=0;i<b;i++)
		c=c*a;
	cout<<"i = "<<i<<endl;
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
