#include <bits/stdc++.h>
using namespace std;
int j;
struct  node
{
    int data;
    node *next,*prev;
};
node *creatnode(node*qq, int data)
{
    node *b=new node;
    if(b==NULL)
    {
       exit(1);
    }
    b->data=data;
    b->next=qq;
    b->prev=qq;
    return b;
}
void print(node *head)
{
    node *p=head;
    cout<<"Elements are: ";
    while(1)
    {
        if(p==NULL){
            break;
        }
        else{
        cout<<p->data<<" ";
        p=p->next;
        }
    }
    cout<<endl;

}
node* shafkat(node *head, int data)
{
       node *HI=new node;
       HI->data=data;
       HI->next=head;
       head=HI;
       return head;
}
int main()
{
    node *head=NULL, *p=head;
    int new_node,m=0,b=0;
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
    cout<<"Give an item to insert at beginning: ";
    cin>>j;
    head=shafkat(head,j);
    print(head);
    return 0;
}

