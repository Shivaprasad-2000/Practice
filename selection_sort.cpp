#include<bits/stdc++.h>
using namespace std;
void Input(int *n ,int *a)
{
	cout<<"Enter the number of elements : ";
	cin>>*n;
	cout<<"Enter Elements : ";
	for(int i=0;i<*n;i++)
	{
		cin>>a[i];
	}
}
void Selection_sort(int n,int *a)
{
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			//int snum=a[i];
			if (a[i]>a[j])
				{
					/*snum=a[j];
					a[j]=a[i];
					a[i]=snum;*/
					swap(a[i],a[j]);
				}
		}
	}
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
	Selection_sort(n,a);
	Output(n,a);
	cout<<endl;
	return 0;
}
