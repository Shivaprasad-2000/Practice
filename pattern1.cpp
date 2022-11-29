#include<bits/stdc++.h>
using namespace std;
void Input(int *R,int *C)
{
	cout<<"Enter the number of rows : "<<endl;
	cin>>*R;
	cout<<"Enter the number of coloumns : "<<endl;
	cin>>*C;
}
void Output(int R,int C)
{
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
			cout<<"*";
		cout<<endl;		
	}
}
int main()
{
	int r,c;
	Input(&r,&c);
	Output(r,c);
}
