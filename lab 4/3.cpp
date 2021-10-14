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
int shafkat(node*head)
{
    node *p=head;
    int dif=0,k=0;
    while(1)
    {
        dif++;
        //cout<<"HI";
        if(p==NULL)
        {
            break;
        }
        else if((p->data)==l)
        {
            k=1;
            cout<<"Found at position "<<dif<<"."<<endl;
            cout<<"Node address:"<<p;
            break;
            dif++;
        }
        else
        {
            p=p->next;
            continue;
        }
    }
    if(k==0)
    {
        cout<<"Sorry not found "<<endl;
    }
}
int main()
{
    cout<<"Enter the element you want to sarch:";
    cin>>l;
    cout<<endl;
    node *head=NULL, *p=head;
    cout<<"Enter the total element number:";
    int new_node;
    cin >> new_node;
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
            p=head;
        }
        else
        {
            cout<<m<<" number element:";
            cin>>b;
            cout<<endl;
            m++;
            p->next=creatnode(NULL,b);
            p=p->next;
        }
    }
    shafkat(head);
    hi:;
}

