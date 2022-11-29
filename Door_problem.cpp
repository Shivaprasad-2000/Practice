#include<bits/stdc++.h>
using namespace std;
int Door(long long int N)
{
	bool A[N+1];
        for(int i=0;i<=N;i++)
            A[i]=false;
        for(int i=0;i<=N;i++)
            for(int j=i+1;j<=N;j=j+i+1)
                if(A[j]==false)
                    A[j]=true;
                else
                    A[j]=false;
        int n=0;
        for(int i=0;i<=N;i++)
            if(A[i]==true)
                n++;
        return n;
}
int main()
{
	long long int N,n;
	cin>>N;
	n=Door(N);
	cout<<n<<endl;
	return 0;
}
