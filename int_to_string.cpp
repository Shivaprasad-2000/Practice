#include<bits/stdc++.h>
using namespace std;
string Convert_string(int a)
{
	string A;
	char b[10]={'0','1','2','3','4','5','6','7','8','9'};
	for(int i=0;a!=0;a=a/10)
		A=b[a%10]+A;
	return A;
}
int main()
{
	int a;
	cout<<"Enter the number :";
	cin>>a;
	string c;
	c=Convert_string(a);
	cout<<c<<endl;
	return 0;
}

