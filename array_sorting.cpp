#include<bits/stdc++.h>
using namespace std;
void Input(int *n,int *a)
{
	cout<<"Enter the number of elements : ";
	cin>>*n;
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<*n;i++)
		cin>>a[i];
	
}
void Sorting(int n,int *a)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				int tem=a[i];
				a[i]=a[j];
				a[j]=tem;
			}
	}
}
void Output(int n,int *a)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main ()
{
	int n,a[n];
	Input(&n,a);
	Sorting(n,a);
	Output(n,a);
	return 0;
}
