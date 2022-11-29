#include<bits/stdc++.h>
using namespace std;
void Input(int *A,int *B)
{
	cout<<"Enter the range :"<<endl;
	cin>>*A>>*B;
}
bool Prime(int num)
{
	for(int j=2;j<=sqrt(num);j++)
	{
		if(num % j == 0)
			return false;
	}
	return true;
}
void OutPut(int A , int B)
{
	cout<<"Prime numbers from "<<A<<" to "<<B<<" are :"<<endl;
	for (int i=A;i<=B;i++)
	{
		if(Prime(i))
		{
			cout<<i<<endl;
		}
	}
}
int main()
{
	int A,B;
	Input(&A,&B);
	OutPut(A,B);
	return 0;
}
