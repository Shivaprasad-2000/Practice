#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cout<<"Enter the size : "<<endl;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
