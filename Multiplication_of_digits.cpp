#include<bits/stdc++.h>
using namespace std;
void Input(int *N)
{
	cout<<"Enter the number "<<endl;
	cin>>*N;
}
int Multiplication(int N)
{
	int Mul=1;
	for (;N!=0;N=N/10)
	{
		int n=0;
		n=(N%10);
		Mul=Mul*n;	
	}
	return Mul;
}
void Output(int N,int Mul)
{
	cout<<"The multiplication of digits of "<<N<<" is "<<Mul<<endl;
}
int main()
{
	int N,Mul;
	Input(&N);
	Mul=Multiplication(N);
	Output(N,Mul);	
	return 0;
}
