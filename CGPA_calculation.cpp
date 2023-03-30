#include<bits/stdc++.h>
using namespace std;
class student
{
	string USN;
	string Name;
	int Cred[6];
	float M[6];
	char G[6];
	float SGPA;
 public:
	void Set_name_USN();
	void Set_credits();
	//float calculate_SGPA(int*);
        void grade();
	void set_marks();
	void display();		
};
void student::Set_credits()
{
    cout<<"enter the credits of cources"<<endl;
     for (int i=0;i<6;i++)
    {
        cin>>Cred[i];
    }
}
	
void student::Set_name_USN()
{
    cout<<"Enter the name of student"<<endl;
    cin>>Name;
    cout<<"Enter the USN of the student"<<endl;
    cin>>USN;
}
void student::set_marks()
{
     cout<<"Enter student marks"<<endl;
    for (int i=0;i<6;i++)
    {
        cin>>M[i];
    }
   
}
void student::grade()
{
    float GP;
    float sum=0,C=0;
    for(int i=0;i<6;i++)
    {
        if(M[i]>=90)
        {
            G[i]='S';
            GP=10;
        }
        else if(M[i]>=80 && M[i]<90)
        {
            G[i]='A';
            GP=9;
        }
         else if(M[i]>=70 && M[i]<80)
        {
            G[i]='B';
            GP=8;
        }
         else if(M[i]>=60 && M[i]<70)
        {
            G[i]='C';
            GP=7;
        }
         else if(M[i]>=50 && M[i]<60)
        {
            G[i]='D';
            GP=6;
        }
         else if(M[i]>=40 && M[i]<50)
        {
            G[i]='E';
            GP=5;
        }
         else
        {
            G[i]='F';
            GP=0;
        }
        sum=sum+(GP*Cred[i]);
        C=C+Cred[i];
    }
   SGPA=sum/C;
}
/*float student::calculate_SGPA(int *a)
{
    float A;
    float sum=0,C=0;
    for(int i=0;i<6;i++)
    {
        if(G[i]=='S')
        {
            A=10;
        }
        else if(G[i]=='A')
        {
            A=9;
        }
        else if(G[i]=='B')
        {
            A=8;
        }
        else if(G[i]=='C')
        {
            A=7;
        }
        else if(G[i]=='D')
        {
            A=6;
        }
        else if(G[i]=='E')
        {
            A=5;
        }
        else
        {
            A=0;
        }
        sum=sum+(A*a[i]);
        C=C+a[i];
    }
    return (sum/C);
}*/
void student::display()
{
    cout<<"Name: \n"<<Name<<endl<<"USN: \n"<<USN<<endl<<"SGPA: \n"<<SGPA<<endl;
    cout<<"Obtained grades:";
    for(int i=0;i<6;i++)
    {
    	cout<<G[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    student stu1;
    stu1.Set_credits();
    stu1.Set_name_USN();
    stu1.set_marks();
    stu1.grade();
    //S=stu1.calculate_SGPA(a);
    stu1.display();
    return 0;
}
