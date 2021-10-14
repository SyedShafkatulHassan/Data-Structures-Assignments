#include <bits/stdc++.h>
using namespace std ;
int l;
struct  node
{
    int data;
    node *next;
};
int b,m=0;
node *creatnode(node *next, int data)
{
    node *new_node=new node;
    if(new_node==NULL)
    {
        exit(1);
    }
    new_node->data=data;
    new_node->next=next;
    return new_node;
}
node *shafkat(node *head)
{
    if (head==NULL)
    {
        exit(1);
    }
    else
    {
    node*s=head;
    head=head->next;
    return head;
    }
}
void print(node *head)
{
    node *hi=head;
    cout<<"After deleteing  elements are: ";
    while(1)
    {
        if(hi==NULL){
            break;
        }
        else{
        cout<<hi->data<<" ";
        hi=hi->next;
        }
    }
    cout<<endl;
}
int main()
{

    node *head=NULL, *ptr=head;
    int new_node,l=0;
    cout<<"Enter the total element number:";
    cin >> new_node;
    if(new_node==0)
    {
        goto hi;
    }
    while(new_node--)
    {
        l=1;
        if(m==0)
        {
            cout<<m<<" number element:";
            cin>>b;
            cout<<endl;
            m++;
            head=creatnode(NULL,b);
            ptr=head;
        }
        else
        {
            cout<<m<<" number element:";
            cin>>b;
            cout<<endl;
            m++;
            ptr->next=creatnode(NULL,b);
            ptr=ptr->next;
        }
    }
    head=shafkat(head);
    print(head);
    hi:
    if(l==0)
    {
    cout<<"No element"<<endl;
    }
}
