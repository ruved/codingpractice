#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 struct Node{
     Node *next;
     int val;
     Node(int v)
     {
         val=v;
         next=NULL;
     }
 };
 //delete a node in the  Linkedlist
 
Node* insert(Node *head,int val)
{
    if(head==NULL) {head=new Node(val); return head;}
    Node * cur=head;
    while(cur->next)
    {
        cur=cur->next;
    }
    cur->next=new Node(val);
    return head;
}
void printlist(Node *head)
{
    Node *cur=head;
    while(cur)
    {
        cout<<cur->val<<" ";
        cur=cur->next;
    }
}


Node * reverse(Node *head)
{
    /*non recursive method to reverse a linkedlist
    Node *prev,*cur,*next;
        cur=head;
        prev=NULL;
        while(cur)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
        */

       //recursive way to reverse a linkedlist
       if(head==NULL||head->next==NULL) return head;
       Node *rest=reverse(head->next);
       head->next->next=head;
       head->next=NULL;
       return rest;

}
 int main()
 {
    //create Linkedlist 
    int n,val;
    cin>>n;
    Node *head=NULL;
    for(int i=0;i<n;++i)
    {   
        cin>>val;
        head=insert(head,val);
        
    }
    head=reverse(head);
        printlist(head);
  return 0;
 }