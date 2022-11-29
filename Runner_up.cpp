#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,gt,Ru=0;
	cin>>n;
	int a[n];//,b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	gt=a[0];
	for(int i=1;i<n;i++)                    //This loop will identify the highest score
	{
		if(a[i]>gt)
		{
			gt=a[i];
		}
	}
	for(int i=0;i<n;i++)                    //This was previously used to store a[] in b[] without highest score 
	{                                       //Now it is used direclty to identify 2nd highest score i.e., RunnerUp score
		if(a[i]!=gt)
		{
			//b[i]=a[i];
			if(a[i]>Ru)             //This if statement is introduced to identify the runnerup score
			{
				Ru=a[i];
			}	
		}
		/*else
		{
			b[i]=0;
		}*/
		
	}
	/*Ru=b[0];
	for(int i=0;i<n;i++)                   //Previosly this code was used to get the Runnerup score
	{
		if(b[i]>Ru)
		{
			Ru=b[i];
		}
	}*/
	cout<<"The RunnerUp score is : "<<Ru<<endl;
	return 0;
}
