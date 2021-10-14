#include <iostream>
using namespace std;
struct  node
{
    int data;
    node *next, *prev;
};
node *creatnode(node *qq, int data)
{
    node *q=new node;
    if(q==NULL)
    {
        cout<<"Overflow"<<endl;
        return 0;
    }
    q->data=data;
    q->next=qq;
    q->prev=qq;
    return q;
}
void print(node *head)
{
    node *p=head,*s;
    cout<<"elements are: ";
    while(1)
    {
        if(p==NULL)
        {
            break;
        }
        else
        {
        cout<<p->data<<" ";
        s=p;
        p=p->next;
        }
    }
    cout<<endl;
}
void shafkat(node* head, int data)
{
    node *ptr=head;
    while(1){
    if(ptr->next==NULL)
    {
        break;
    }
    else
    {
        ptr=ptr->next;
    }
    }
    node *n=new node;
    if(n==NULL)
    {
        exit(1);
    }
    n->data=data;
    n->next=NULL;
    n->prev=NULL;
    ptr->next=n;
}
int main()
{
    node *head=NULL, *s=head;
    int new_node,m=0,b=0,w=0;
    cout<<"Enter the total element number:";
    cin >> new_node;
    w=new_node;
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

    int item;
    cout<<"Give an element to insert : ";
    cin>>item;
    if(w==0)
    {
        cout<<item;
        goto gg;
    }
    shafkat(head,item);
    print(head);
    gg:;
}
