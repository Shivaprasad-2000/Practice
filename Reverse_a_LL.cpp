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

node* Reverse(node* head)
{
  node* temp_n;
  temp_n = head -> next;
  node* temp_p = NULL;
  while(head != NULL)
  {
      temp_n = head -> next;
      head -> next = temp_p;
      temp_p = head;
      head = temp_n;
  }
  return temp_p;
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
    head = Reverse(head);
    Output(head);
    return 0;
}