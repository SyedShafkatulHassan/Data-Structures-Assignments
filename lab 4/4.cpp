#include <bits/stdc++.h>
using namespace std ;
int l,o;
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
int shafkat(node*head)
{
    node *hi=head,*p;
    while(1)
    {
        if(hi->next==NULL)
        {
            break;
        }
        else{
        p=hi;
        hi=hi->next;
        }
    }
    delete (hi->next);
    p->next = NULL;
}
void print(node *head)
{
    node *hi=head;
    cout<<"After delete elements are: ";
    while(1)
    {
        if(hi==NULL){
            break;
        }
        else{
        if(o==1)
        {
            cout<<"No element";
            break;
        }
        else
        {
        cout<<hi->data<<" ";
        hi=hi->next;
        }
        }
    }
    cout<<endl;
}
int main()
{
    node *head=NULL, *hi=head;
    int new_node;
    cout<<"Enter the total element number:";
    cin >> new_node;
    o=new_node;
    if(new_node==0)
    {
        goto hi;
    }
    cout<<"Enter elements"<<endl;
    while(new_node--)
    {
        if(m==0)
        {
            cout<<m<<" number element:";
            cin>>b;
            cout<<endl;
            m++;
            head=creatnode(NULL,b);
            hi=head;
        }
        else
        {
            cout<<m<<" number element:";
            cin>>b;
            cout<<endl;
            m++;
            hi->next=creatnode(NULL,b);
            hi=hi->next;
        }
    }

    shafkat(head);
    print(head);
    hi:;
}


