#include<bits/stdc++.h>
using namespace std;
void Input(int *a,int *b,int *c)
{
	cout<<"Enter the pythagorian triplets : ";
	cin>>*a>>*b>>*c;
}
bool fun(int a,int b,int c)
{
	if(pow(a,2)==(pow(b,2)+pow(c,2)))
		return true;
	return false;
}
void Output(int a,int b,int c)
{
	if(fun(a,b,c) || fun(b,c,a) || fun(c,a,b))
	{
		cout<<"The given numbers are pythagorian triplets"<<endl;
	}
	else
	{
		cout<<"The given numbers are not pythagorian triplets"<<endl;
	}
}
int main()
{
	int a,b,c;
	Input(&a,&b,&c);
	Output(a,b,c);
	return 0;
}
