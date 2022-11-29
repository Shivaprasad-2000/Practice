#include<bits/stdc++.h>
using namespace std;
void Input(int *R)
{
	cout<<"Enter the number of rows : "<<endl;
	cin>>*R;
}
void Output(int R)
{
	for(int i=0;i<R;i++)
	{
		for (int j=0;j<R;j++)
			if(j>=i)
				cout<<"* ";
			else
				cout<<"  ";
		
		cout<<endl;
	}
}
int main()
{
	int r;
	Input(&r);
	Output(r);
	return 0;
}
