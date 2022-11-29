#include<bits/stdc++.h>
using namespace std;
void Input(int *n,int a[])
{
	cout<<"Enter the number of elements : ";
	cin>>*n;
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<*n;i++)
		cin>>a[i];
}
void Insertion_sorting(int n,int a[])
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j>=0 && j<n;j--)
			if(a[j]<a[j-1])
				swap(a[j],a[j-1]);
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
	Insertion_sorting(n,a);
	Output(n,a);
	cout<<endl;
	return 0;
}
