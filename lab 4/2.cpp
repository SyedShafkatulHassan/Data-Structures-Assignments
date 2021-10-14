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
        exit(1);
    }
    new_node->data=data;
    new_node->next=next;
    return new_node;
}
int shafkat(node*head)
{
    node *ptr=head;
    int minn=head->data,dif=0;
    while(1)
    {
        //cout<<"HI";
        if(ptr==NULL)
        {
            break;
        }
        else if((ptr->data)%2==1)
        {
            ptr=ptr->next;
            dif++;
        }
        else
        {
            ptr=ptr->next;
            continue;
        }
    }
    cout<<"Total even elements are : ";
    cout<<dif<<endl;
}
int main()
{
    node *head=NULL, *ptr=head;
    int new_node;
    cout<<"Enter the total element number:";
    cin >> new_node;
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
    shafkat(head);
}




