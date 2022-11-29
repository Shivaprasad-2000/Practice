#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int Data;
	Node *Next;
	Node(int D)
	{
		Data=D;
		Next=NULL;
	}
};
void Node_at_head(Node* &Head,int D)
{
	Node*temp=new Node(D);
	temp->Next=Head;
	Head=temp;
}
void Node_at_tail(Node* &Tail,int D)
{
	Node*temp=new Node(D);
	Tail->Next=temp;
	Tail=temp;
}
void Input(Node* &Head,Node* &Tail)
{
	char C;
	cout<<"Do you want to enter more data?\n(y) for yes (n) for no : ";
	cin>>C;
	int D;
	while(C=='y')
	{
		cout<<"Enter the data : ";
		cin>>D;
		cout<<"Where do you want to insert?\n(h) for head (t) for tail : ";
		char Ch;
		cin>>Ch;
		if(Ch=='h' || Ch=='H')
			Node_at_head(Head,D);
		else
			Node_at_tail(Tail,D);
		cout<<"Do you want to enter more data?\n(y) for yes (n) for no : ";
		cin>>C;
	}
}
void Output(Node* Head)
{
	while (Head!= NULL)
	{
		cout<<Head->Data<<" ";
		Head=Head->Next;
	}
	cout<<endl;
}
int main()
{
	int D;
	cout<<"Enter the data : ";
	cin>>D;
	Node*Head=new Node(D),*Tail=Head;
	Input(Head,Tail);
	Output(Head);
	return 0;
}
