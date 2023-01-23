#include<bits/stdc++.h>
using namespace std;

class node{
  public:
  int data ;
  node* next;
  node(int d)
  {
    //   cout<<"constructor called"<<endl;
      this -> data = d;
      this -> next = NULL;
  }
};

node* Reverse(node* head,node *pre)
{
    if(head -> next == NULL){
        head -> next = pre;
        return head;
    }
    node* temp = Reverse(head -> next , head);
    head -> next = pre;
    return temp;
}

void Output(node* head)
{
    while(head != NULL)
    {
        cout<<head -> data << " ";
        head = head -> next;
    }
    cout<<endl;
}

int main()
{
    node* head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = new node(40);
    // cout<<head -> next -> data<<endl;
    // cout<<head.next.data<<endl;
    node temp(30450);
    // temp -> data = 30;
    // cout<<temp.data<<endl;
    // cout<<head -> next ->next -> data<< endl;
    head = Reverse(head,NULL);
    Output(head);
    return 0;
}