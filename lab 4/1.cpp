#include <bits/stdc++.h>
using namespace std ;
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
        cout<<"overflow";
        exit(1);
    }
    new_node->data=data;
    new_node->next=next;
    return new_node;
}
int shafkat(node*head)
{
    node *s=head;
    int minn=head->data, maxx=0,dif=0;
    while(1)
    {
        if(s==NULL)
        {
            break;
        }
        else if(minn>s->data)
        {
            minn=s->data;
            s=s->next;
        }
        else
        {
            maxx=s->data;
            s=s->next;
        }

    }

    dif=maxx-minn;
    cout<<"Difference is = "<<dif<<endl;
}
int main()
{
    node *head=NULL,*s=head;
    int new_node;
    cout<<"Enter the total element number:";
    cin >> new_node;
    cout<<"Enter elements:"<<endl;
    while(new_node--)
    {
        if(m==0)
        {
            cout<<m<<" number element:";
            cin>>b;
            cout<<endl;
            m++;
            head=creatnode(NULL,b);
            s=head;
        }
        else
        {
            cout<<m<<" number element:";
            cin>>b;
            cout<<endl;
            m++;
            s->next=creatnode(NULL,b);
            s=s->next;
        }
    }
    shafkat(head);
}

