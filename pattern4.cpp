#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,k=0;
	cout<<"Enter the size : "<<endl;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<++k<<" ";
		}
		cout<<endl;
	}
	return 0;
}
