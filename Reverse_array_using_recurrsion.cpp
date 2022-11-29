#include<bits/stdc++.h>
using namespace std;
void Reverse(int *a,int L,int R)
{
	if(L<R)
	{
		swap(a[L],a[R]);
		Reverse(a,L+1,R-1);
	}
}
void Input(int a[],int *n)
{
	cout<<"Enter the number of elements : ";
	cin>>*n;
	cout<<"Enter the elements : "<<endl;
	for(int i=0;i<*n;i++)
		cin>>a[i];
}
void Output(int *a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int n,a[n];
	Input(a,&n);
	Reverse(a,0,n-1);
	Output(a,n);
	return 0;
}
