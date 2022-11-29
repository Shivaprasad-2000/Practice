#include<bits/stdc++.h>
using namespace std;
class student
{
	string name;
	string USN;
	public:
	void set_name(string);
	void set_USN(string);
	string get_name();
	string get_USN();
};
void student::set_name(string A)
{
	name=A;
}
void student::set_USN(string A)
{
	USN=A;
}
string student::get_name()
{
	return name;
}
string student::get_USN()
{
	return USN;
}
int main()
{
	int n,i;
	cout<<"Enter the number of students : ";
	cin>>n;
	student *S=new student [n],*S_temp=S;
	for(i=0;i<n;i++)
	{
		string A,B;
		cout<<"Enter the  student "<<i+1<<" name : ";
		cin>>A;
		cout<<"Enter the student "<<i+1<<" USN : ";
		cin>>B;
		S->set_name(A);
		S->set_USN(B);
		S++;
	}
	cout<< "Name                        USN"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<S_temp->get_name()<<"           ";
		cout<<S_temp->get_USN()<<endl;
		S_temp++;
	}
	return 0;
}
