#include<bits/stdc++.h>
using namespace std;
void Input(int *n,int a[])
{
	cout<<"Enter the number of Elements : ";
	cin>>*n;
	cout<<"Enter the Elements :"<<endl;
	for(int i=0;i<*n;i++)
		cin>>a[i];
	cout<<endl;
}
void Bubble(int n,int a[])
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i;j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
}
void Output(int n,int *a)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main()
{
	int n,a[n];
	Input(&n,a);
	Bubble(n-1,a);
	Output(n,a);
	cout<<endl;
	return 0;
}
